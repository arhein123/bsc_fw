// Copyright (c) 2022 tobias
// 
// This software is released under the MIT License.
// https://opensource.org/licenses/MIT

#include "defines.h"

#ifndef HTML_MINIFY
const char webSettingsStyle[] PROGMEM = R"rawliteral(
<style>
html {font-family:Helvetica; display:inline-block; margin:0px auto; text-align:left;}
body {margin: 0; background-color: #ffffff;}
.content {padding:20px; max-width:600px;}
.topnav {overflow: hidden;position:sticky;top:0;background-color:#6E6E6E;color:white;padding:5px;cursor:default;}
.topnav span {float: left; padding: 14px 16px; text-decoration: none; font-size:1.7rem;}
.btnBack:hover {background-color:#555555;color:white;}
.hl {flex:1;font-size:2rem;}
.titel {font-weight:bold; text-align:left; padding:5px;}
.Ctr {text-align: left;}
.Ctd {width:150; padding:10px 5px 0 5px; text-align: left; vertical-align: top;}
.Ctd2 {text-align: left; vertical-align: top; padding:15px 0 0 0;}
.td0 {padding: 0 5px 0 5px;}
.help {border-left:2px solid black; 
  border-bottom: 1px solid #fff0;
  border-image: linear-gradient(90deg, #000, #000 1% ,#FFF 1.5%, #fff 100%);
  border-image-slice: 1;
  padding:0 0 0 2px; margin:0 0 0 5px;
  text-align:left; vertical-align:top;}
.sep {padding:2px; border-top:15px solid #fff; background: linear-gradient(90deg, #f0f0f0 40%, #fff0 80%);}
button {font-size:100%; width:150px; padding:0px; margin:10px 0 0 0;}
.sb {font-size:100%; width:25px; height:25px; padding:0px; margin:5px 0 0 0;}
input:invalid {border:1px solid red;}
input:valid {border:1px solid green;}
.secVal {padding:0 0 0 10px;}
fieldset{padding:0px; margin:0px; border:0px;}

.loading-container {
  margin: 0px;
  padding: 0px;
  min-height: 100vh;
  display: flex;
  align-items: center;
  justify-content: center;
  position: fixed;
  top: 50%;
  left: 50%;
  transform: translateX(-50%) translateY(-50%);
}
.loading-spinner {
  display: block;
  width: 100px;
  height: 100px;
  border: 7px solid #87ceeb3b;
  border-radius: 50%;
  border-top-color: #4682b4;
  animation: spin 1s linear infinite;
}
@keyframes spin {
  to {
    -webkit-transform: rotate(360deg);
  }
}

.toggle {display: none;}
.lbl-toggle {
  display: block;
  /*font-weight: bold;*/
  /*font-family: monospace;*/
  font-size: 1.0rem;
  /*text-transform: uppercase;*/
  text-align: left;
  padding: 2px 0 2px 10px;
  /*color: #A77B0E;*/
  background: #eaeaea;
  cursor: pointer;
  border-radius: 5px;
  transition: all 0.25s ease-out;
}
.lbl-toggle:hover {color: #464646;}
.lbl-toggle::before {
  content: ' ';
  display: inline-block;
  border-top: 5px solid transparent;
  border-bottom: 5px solid transparent;
  border-left: 5px solid currentColor;
  vertical-align: middle;
  margin-right: .5rem;
  transform: translateY(-2px);
  transition: transform .2s ease-out;
}
.toggle:checked + .lbl-toggle::before {
  transform: rotate(90deg) translateX(-3px);
}
.collapsible-content {
  max-height: 0px;
  overflow: hidden;
  transition: max-height .25s ease-in-out;
}
.toggle:checked + .lbl-toggle + .collapsible-content {
  max-height: 100vh;
}
.toggle:checked + .lbl-toggle {
  border-bottom-right-radius: 0;
  border-bottom-left-radius: 0;
}
.collapsible-content .content-inner {
  background: #f3f3f3;
  border-bottom: 1px solid #eaeaea;
  border-bottom-left-radius: 7px;
  border-bottom-right-radius: 7px;
  padding: .5rem 1rem;
}
</style>
)rawliteral";
#else
const char webSettingsStyle[] PROGMEM = R"rawliteral(
<style>
.Ctd,.Ctd2,.help{vertical-align:top;text-align:left}.Ctd,.Ctd2,.Ctr,.help,.lbl-toggle,.titel,html{text-align:left}html{font-family:Helvetica;display:inline-block;margin:0 auto}body{margin:0;background-color:#fff}.content{padding:20px;max-width:600px}.topnav{overflow:hidden;position:sticky;top:0;background-color:#6e6e6e;color:#fff;padding:5px;cursor:default}.topnav span{float:left;padding:14px 16px;text-decoration:none;font-size:1.7rem}.btnBack:hover{background-color:#555;color:#fff}.hl{flex:1;font-size:2rem}.titel{font-weight:700;padding:5px}.Ctd{width:150;padding:10px 5px 0}.Ctd2{padding:15px 0 0}.td0{padding:0 5px}.help{border-left:2px solid #000;border-bottom:1px solid #fff0;border-image:linear-gradient(90deg,#000,#000 1% ,#FFF 1.5%,#fff 100%);border-image-slice:1;padding:0 0 0 2px;margin:0 0 0 5px}.sep{padding:2px;border-top:15px solid #fff;background:linear-gradient(90deg,#f0f0f0 40%,#fff0 80%)}.sb,button{font-size:100%;padding:0}button{width:150px;margin:10px 0 0}.sb{width:25px;height:25px;margin:5px 0 0}input:invalid{border:1px solid red}input:valid{border:1px solid green}.secVal{padding:0 0 0 10px}fieldset{padding:0;margin:0;border:0}.loading-container{margin:0;padding:0;min-height:100vh;display:flex;align-items:center;justify-content:center;position:fixed;top:50%;left:50%;transform:translateX(-50%) translateY(-50%)}.loading-spinner{display:block;width:100px;height:100px;border:7px solid #87ceeb3b;border-radius:50%;border-top-color:#4682b4;animation:1s linear infinite spin}@keyframes spin{to{-webkit-transform:rotate(360deg)}}.toggle{display:none}.lbl-toggle{display:block;font-size:1rem;padding:2px 0 2px 10px;background:#eaeaea;cursor:pointer;border-radius:5px;transition:.25s ease-out}.lbl-toggle:hover{color:#464646}.lbl-toggle::before{content:' ';display:inline-block;border-top:5px solid transparent;border-bottom:5px solid transparent;border-left:5px solid currentColor;vertical-align:middle;margin-right:.5rem;transform:translateY(-2px);transition:transform .2s ease-out}.toggle:checked+.lbl-toggle::before{transform:rotate(90deg) translateX(-3px)}.collapsible-content{max-height:0;overflow:hidden;transition:max-height .25s ease-in-out}.toggle:checked+.lbl-toggle+.collapsible-content{max-height:100vh}.toggle:checked+.lbl-toggle{border-bottom-right-radius:0;border-bottom-left-radius:0}.collapsible-content .content-inner{background:#f3f3f3;border-bottom:1px solid #eaeaea;border-bottom-left-radius:7px;border-bottom-right-radius:7px;padding:.5rem 1rem}
</style>
)rawliteral";
#endif


#ifndef HTML_MINIFY
const char webSettingsScript[] PROGMEM = R"rawliteral(
<script>
function btnClick(btn) {
  var xhttp = new XMLHttpRequest();
  xhttp.open('POST','?'+btn+'=',true);
  xhttp.timeout=1000;
  xhttp.send();  
}

function urlencode(str) {
  str = (str + '').toString();
  return encodeURIComponent(str)
    .replace('!', '%21')
    .replace('\'', '%27')
    .replace('(', '%28')
    .replace(')', '%29')
    .replace('*', '%2A')
    .replace('%20', '+');
}

const collection = document.getElementsByClassName('t1');
for (let i = 0; i < collection.length; i++){
  var button = document.createElement('button');
  button.type = 'button';
  button.innerHTML = 'S';
  button.className = 'sb';
  button.addEventListener("click", function(event){
    let t1=this.parentNode.previousSibling.firstChild;
    if(t1.nextSibling!=null){
      if(t1.nextSibling.className==='toggle') t1=this.parentNode.previousSibling.childNodes[5].childNodes[1].childNodes[1];
    }
    if(t1.checkValidity()===false){
      alert('Fehler');
      return;
    }

    var name=t1.getAttribute('name');
    var val=0;
    if(t1.nodeName=='SELECT'){
      val=t1.options[t1.selectedIndex].value; 
    }else if(t1.nodeName=='INPUT'){
      if(t1.type=='checkbox'){
        if(t1.checked){val=1;}
        else{val=0;}
      }else{
        val=t1.value;
      }
    }else if(t1.nodeName=='FIELDSET'){
      var ele = t1.getElementsByTagName('INPUT');
      name=ele[0].getAttribute('name');
      for(i=0; i<ele.length; i++) if(ele[i].checked) val|=(1<<i);
    }else{
      val=t1.value;
    }

    var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = function(){
      if (this.readyState==4 && this.status==200){
        alert(this.responseText);
      }
    };
    xhttp.open('GET','?SAVE=&'+name+'='+urlencode(val),true);
    xhttp.timeout=5000;
    xhttp.send();
  });
  collection[i].appendChild(button);
}
document.getElementById('lc').style.display = 'none';

function copyStringToClipboard (str) {
   var el = document.createElement('textarea');
   el.value = str;
   el.setAttribute('readonly', '');
   el.style = {position: 'absolute', left: '-9999px'};
   document.body.appendChild(el);
   el.select();
   document.execCommand('copy');
   document.body.removeChild(el);
}
</script>
)rawliteral";
#else
const char webSettingsScript[] PROGMEM = R"rawliteral(
<script>
function btnClick(e){var t=new XMLHttpRequest;t.open("POST","?"+e+"=",!0),t.timeout=1e3,t.send()}function urlencode(e){return e=(e+"").toString(),encodeURIComponent(e).replace("!","%21").replace("'","%27").replace("(","%28").replace(")","%29").replace("*","%2A").replace("%20","+")}const collection=document.getElementsByClassName("t1");for(let e=0;e<collection.length;e++){var button=document.createElement("button");button.type="button",button.innerHTML="S",button.className="sb",button.addEventListener("click",(function(t){let n=this.parentNode.previousSibling.firstChild;if(null!=n.nextSibling&&"toggle"===n.nextSibling.className&&(n=this.parentNode.previousSibling.childNodes[5].childNodes[1].childNodes[1]),!1!==n.checkValidity()){var o=n.getAttribute("name"),l=0;if("SELECT"==n.nodeName)l=n.options[n.selectedIndex].value;else if("INPUT"==n.nodeName)l="checkbox"==n.type?n.checked?1:0:n.value;else if("FIELDSET"==n.nodeName){var c=n.getElementsByTagName("INPUT");for(o=c[0].getAttribute("name"),e=0;e<c.length;e++)c[e].checked&&(l|=1<<e)}else l=n.value;var i=new XMLHttpRequest;i.onreadystatechange=function(){4==this.readyState&&200==this.status&&alert(this.responseText)},i.open("GET","?SAVE=&"+o+"="+urlencode(l),!0),i.timeout=5e3,i.send()}else alert("Fehler")})),collection[e].appendChild(button)}function copyStringToClipboard(e){var t=document.createElement("textarea");t.value=e,t.setAttribute("readonly",""),t.style={position:"absolute",left:"-9999px"},document.body.appendChild(t),t.select(),document.execCommand("copy"),document.body.removeChild(t)}document.getElementById("lc").style.display="none";
</script>
)rawliteral";
#endif


#ifndef HTML_MINIFY
const char webSettingsScript_Timer[] PROGMEM = R"rawliteral(
<script>
function getData() {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      let values = this.responseText.split('|');
      if(values.length==1){
        document.getElementById('data_div').innerHTML = this.responseText;
      }else{
        for (let i=0; i<(values.length); i++){
          let value = values[i].split(';');
          if(value[0]=='display'){
            document.getElementById('lc').style.display = value[1]; 
          }else if(value[0]=='btn1'){
            if(value[1]=='0'){document.getElementById("btn1").disabled = true;}
            else{document.getElementById("btn1").disabled = false;}    
          }else{
            document.getElementById(value[0]).innerHTML = value[1] + '';
          }
        }
      }
    }
  };
  xhttp.open('GET', '%s', true);
  xhttp.timeout=1000;
  xhttp.send();
  var timer = window.setTimeout('getData()', %i);
}
getData();
</script>
)rawliteral";
#else
const char webSettingsScript_Timer[] PROGMEM = R"rawliteral(
<script>
function getData() {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange=function(){if(4==this.readyState&&200==this.status){let e=this.responseText.split("|");if(1==e.length)document.getElementById("data_div").innerHTML=this.responseText;else for(let t=0;t<e.length;t++){let n=e[t].split(";");"display"==n[0]?document.getElementById("lc").style.display=n[1]:"btn1"==n[0]?"0"==n[1]?document.getElementById("btn1").disabled=!0:document.getElementById("btn1").disabled=!1:document.getElementById(n[0]).innerHTML=n[1]+""}}};
  xhttp.open('GET', '%s', true);xhttp.timeout=1000;xhttp.send();
  var timer = window.setTimeout('getData()', %i);
}
getData();
</script>
)rawliteral";
#endif