/*
  Copyright ©️ 2024 João Vitor de Souza Rodello, Marcela Bedine, Mateus Felipe da Silveira Vieira, Thiago Brito Oliveira dos Santos

      This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/
*/

#include <WiFi.h>
#include <WiFiClient.h>
#include <HTTPClient.h>

#include <env.h>

void setup(){
  Serial.begin(115200);
  pinMode(2, OUTPUT);
  //Serial.println("-- Bem Vindo ao Queda Segura --");
  
  WiFi.mode(WIFI_STA);

  WiFi.begin(WIFI_NAME, WIFI_PASS);


  while(WiFi.status() != WL_CONNECTED){
    delay(100);
  }

  //Serial.println(WiFi.localIP());
}

void loop(){
  digitalWrite(2, HIGH);
  delay(5000);
}