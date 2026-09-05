// Esqueleto de nodo sensor mmWave ESP32-C3 + ESP-NOW.
// Completar MAC del receptor y pines según el módulo físico.
#include <WiFi.h>
#include <esp_now.h>

struct MsgSensor {
  uint8_t id_habitacion;
  uint8_t presencia;
  float voltaje_bat;
  uint8_t porcentaje;
  uint32_t contador;
};

constexpr int PIN_PRESENCIA = 4;
uint32_t contador = 0;

void setup() {
  pinMode(PIN_PRESENCIA, INPUT);
  WiFi.mode(WIFI_STA);
  if (esp_now_init() != ESP_OK) {
    Serial.begin(115200);
    Serial.println("Error iniciando ESP-NOW");
  }
}

void loop() {
  MsgSensor m{};
  m.id_habitacion = 1;
  m.presencia = digitalRead(PIN_PRESENCIA);
  m.contador = contador++;
  // Añadir medición real de batería y esp_now_send().
  delay(500);
}
