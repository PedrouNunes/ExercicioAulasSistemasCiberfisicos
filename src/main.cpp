 #include <Arduino.h>
 #include <WiFi.h>
// -------------------------------------Acender o led---------------------------------------
// Define LED
//  int LED = 2;
// Check if the LED is working
//  void setup() {
//    pinMode(LED,OUTPUT);
//  }
// LED turn on and turn off
//  void loop() {
//    digitalWrite(LED,HIGH);
//    delay(1000);
//    digitalWrite(LED,LOW);
//    delay(1000);
//  }
// -------------------------------------END ----------------------------------------------------------


// -------------------------------------Código para piscar 3 vezes e parar---------------------------------------
//  Define LED
// int LED = 2;
//  Variável para contar o número de piscadas
// int blinkCount = 0;
//  Configuração inicial
// void setup() {
//   pinMode(LED, OUTPUT);
// }
//  Loop principal
// void loop() {
//   if (blinkCount < 3) {
//     Liga o LED
//     digitalWrite(LED, HIGH);
//     delay(1000);
//     Desliga o LED
//     digitalWrite(LED, LOW);
//     delay(1000);
//      Incrementa o contador de piscadas
//     blinkCount++;
//   } else {
//     // Para o loop
//     while (true) {
//       // Opcional: Você pode colocar o LED em um estado fixo (ligado ou desligado)
//       digitalWrite(LED, LOW); // Mantém o LED apagado
//     }
//   }
// }
// -------------------------------------END ----------------------------------------------------------


// ------------------------------------- region Contador de Pressões de Botão------------------------------------
// #include <cstdint>
// struct Button
// {
//   const uint8_t PIN;
//   uint32_t numberKeyPresses;
//   bool pressed;
// };
// Button button1 = {18, 0, false};
// unsigned long button_time = 0;
// unsigned long last_button_time = 0;
// void IRAM_ATTR isr_button()
// {
//   button_time = millis();
//   if (button_time - last_button_time > 250)
//   {
//     button1.numberKeyPresses++;
//     button1.pressed = true;
//     last_button_time = button_time;
//   }
// }
// void setup()
// {
//   Serial.begin(9600);
//   pinMode(button1.PIN, INPUT_PULLUP);
//   attachInterrupt(button1.PIN, isr_button, FALLING);
// }
// void loop()
// {
//   if (button1.pressed)
//   {
//     Serial.printf("Button has been pressed %u times\n",
//                   button1.numberKeyPresses);
//     button1.pressed = false;
//   }
// }
//  -------------------------------------END ----------------------------------------------------------

