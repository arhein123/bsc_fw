// Copyright (c) 2024 tobias
//
// This software is released under the MIT License.
// https://opensource.org/licenses/MIT


#ifndef EXTMANAGER_H
#define EXTMANAGER_H

#include <vector>
#include <memory>
#include "extension/ExtPeripheral.h"
#include "extension/devices/ExtSerial.h"
#include "extension/devices/ExtDisplay.h"
#include "extension/devices/ExtBluetooth.h"


class ExtManager {
  public:
    ExtManager();

    void initialize();
    void cyclicRun(Inverter &inverter);

    ExtSerial &getSerial(size_t index); 
    ExtDisplay &getDisplay(); 
    ExtBluetooth &getBt(); 

  private:
    SemaphoreHandle_t mutexI2cRx;

    const std::vector<uint8_t> serialAdresses = {I2C_DEV_ADDR_SERIAL_EXTENSION};

    std::vector<std::unique_ptr<ExtSerial>> extSerials;
    ExtDisplay extDisplay;
    ExtBluetooth extBluetooth;
};

#endif