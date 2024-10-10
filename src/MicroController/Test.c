// #include <WiFi.h>
// #include <Adafruit_GFX.h>
// #include <Adafruit_SSD1306.h>

// // OLED display dimensions
// #define SCREEN_WIDTH 128
// #define SCREEN_HEIGHT 64

// // Create an instance of the OLED display
// Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// // Wi-Fi credentials
// const char* ssid = "Barbara2";     // Replace with your SSID
// const char* password = "0842877014"; // Replace with your Wi-Fi password

// void setup() {
//   // Initialize serial communication
//   Serial.begin(9600);

//   // Initialize the OLED display
//   if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {  // Use 0x3C as the I2C address
//     Serial.println(F("SSD1306 allocation failed"));
//     for(;;);
//   }

//   // Clear the buffer and display initial message
//   display.clearDisplay();
//   display.setTextSize(1);  // Text size 1 for small font
//   display.setTextColor(WHITE);
//   display.setCursor(0, 0);
//   display.println("Connecting to Wi-Fi...");
//   display.display();

//   // Start connecting to Wi-Fi
//   WiFi.begin(ssid, password);

//   // Display status on OLED while connecting
//   while (WiFi.status() != WL_CONNECTED) {
//     delay(500);
//     Serial.print(".");
//     display.setCursor(0, 10);
//     display.println("...");
//     display.display();
//   }

//   // Once connected, display connection information
//   Serial.println("");
//   Serial.println("WiFi connected");
//   Serial.println("IP address: ");
//   Serial.println(WiFi.localIP());

//   // Clear display and show Wi-Fi connection status and IP address
//   display.clearDisplay();
//   display.setCursor(0, 0);
//   display.println("Wi-Fi Connected!");
//   display.setCursor(0, 10);
//   display.print("IP: ");
//   display.println(WiFi.localIP());
//   display.display(); // Show the message on the screen
// }

// void loop() {
//   // You can add other code here later if needed
// }
