#include "AudioTools.h"
#include "BluetoothA2DPSink.h"

// Set up the I2S/DAC output
AnalogAudioStream out; 
BluetoothA2DPSink a2dp_sink(out);

void setup() {
  // Start Serial for debugging
  Serial.begin(115200);

  // Initialize the internal DAC
  auto cfg = out.defaultConfig();
  out.begin(cfg);

  // Start the Bluetooth Sink
  // The device will appear as "ESP32_LOUD_SPEAKER"
  a2dp_sink.start("Speaker");  

  // Force the internal volume to the absolute maximum (127)
  a2dp_sink.set_volume(500); 
}

void loop() {
  // No logic here - keeps the processor focused on the audio stream
}