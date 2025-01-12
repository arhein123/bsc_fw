// Copyright (c) 2024 tobias
//
// This software is released under the MIT License.
// https://opensource.org/licenses/MIT


#include "extension/ExtManager.h"

ExtManager::ExtManager()
  : extDisplay(I2C_DEV_ADDR_DISPLAY, mutexI2cRx),
    extBluetooth(I2C_DEV_ADDR_BT_EXTENSION_1, mutexI2cRx),
    mutexI2cRx(NULL)
{ 
  mutexI2cRx = xSemaphoreCreateMutex();

  // Füge SerialExtensions hinzu
  for (uint8_t address : serialAdresses)
  {
    extSerials.push_back(std::make_unique<ExtSerial>(address, mutexI2cRx));
  }
}

void ExtManager::initialize()
{
  for (auto& device : extSerials)
  {
    device->initialize();
  }

  extDisplay.initialize();
  extBluetooth.initialize();
}


ExtSerial& ExtManager::getSerial(size_t index)
{
  return *extSerials.at(index);
}


ExtDisplay& ExtManager::getDisplay()
{
  return extDisplay;
}


ExtBluetooth& ExtManager::getBt()
{
  return extBluetooth;
}


void ExtManager::cyclicRun(Inverter &inverter)
{
  // Display
  if(getDisplay().isEnabled())
  {
    getDisplay().sendData(inverter);
  }

  // BT Extension
  if(getBt().isEnabled())
  {
    getBt().getBtBmsData();
  }
}