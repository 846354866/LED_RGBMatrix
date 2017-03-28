

#include <DFRobot_RGBMatrix.h> // Hardware-specific library

#define OE   	9
#define LAT 	10
#define CLK 	11
#define A   	A0
#define B   	A1
#define C   	A2
#define D   	A3
#define E   	A4
#define WIDTH 64
#define HIGH	64

DFRobot_RGBMatrix matrix(A, B, C, D, E, CLK, LAT, OE, false, WIDTH, HIGH);

const uint8_t test_ZH1[] = {
0x18,0x60,0x18,0x60,0x30,0x60,0x7F,0x7E,0x63,0xC6,0x63,0xC6,0x63,0x86,0x63,0x66,
0x7F,0x36,0x63,0x36,0x63,0x06,0x63,0x06,0x63,0x06,0x7F,0x06,0x63,0x3C,0x00,0x18};

const uint8_t test_ZH2[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x1C,0x00,0x01,0xF8,0x1F,0x00,
0x01,0xF0,0x1F,0x00,0x01,0xE0,0x3E,0x00,0x01,0xC0,0x3C,0x00,0x1D,0xCE,0x3C,0x1C,
0x1F,0xFF,0x78,0x3E,0x1E,0x1F,0xFF,0xFE,0x1E,0x1F,0xF0,0x3C,0x1E,0x1F,0xF0,0x3C,
0x1E,0x1F,0xE0,0x3C,0x1E,0x1F,0xC0,0x3C,0x1E,0x1F,0xF0,0x3C,0x1E,0x1F,0x78,0x3C,
0x1E,0x1F,0x3C,0x3C,0x1F,0xFF,0x3E,0x3C,0x1E,0x1F,0x1E,0x3C,0x1E,0x1F,0x1E,0x3C,
0x1E,0x1F,0x1E,0x7C,0x1E,0x1F,0x00,0x7C,0x1E,0x1F,0x00,0x7C,0x1E,0x1F,0x00,0x7C,
0x1E,0x1F,0x00,0x7C,0x1E,0x1F,0x00,0x7C,0x1E,0x1F,0x00,0x78,0x1F,0xFF,0x1F,0xF8,
0x1E,0x1F,0x07,0xF8,0x1E,0x1E,0x03,0xF0,0x00,0x00,0x01,0xC0,0x00,0x00,0x00,0x00};

const uint8_t test_ZH3[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x00,0x01,0xC0,0x00,0x00,
0x00,0x00,0xFC,0x00,0x01,0xF0,0x00,0x00,0x00,0x00,0xFF,0x00,0x01,0xFC,0x00,0x00,
0x00,0x00,0xFF,0x00,0x03,0xFC,0x00,0x00,0x00,0x00,0xFE,0x00,0x03,0xFC,0x00,0x00,
0x00,0x00,0xFC,0x00,0x03,0xF8,0x00,0x00,0x00,0x01,0xF8,0x00,0x07,0xF0,0x00,0x00,
0x00,0x01,0xF0,0x00,0x07,0xF0,0x00,0x00,0x00,0x01,0xF0,0x00,0x07,0xE0,0x00,0x00,
0x00,0x01,0xE0,0x00,0x0F,0xE0,0x00,0x00,0x00,0x03,0xE0,0x70,0x0F,0xC0,0x03,0x80,
0x00,0xF3,0xC0,0xF8,0x0F,0xC0,0x07,0xC0,0x00,0xFF,0xFF,0xFC,0x1F,0x80,0x0F,0xE0,
0x00,0xFF,0xFF,0xFE,0x1F,0xFF,0xFF,0xF0,0x00,0xFF,0xFF,0xFE,0x3F,0xFF,0xFF,0xF0,
0x00,0xF8,0x00,0xFC,0x3F,0xFF,0xFF,0xF0,0x00,0xF8,0x00,0xF8,0x7E,0x00,0x0F,0xC0,
0x00,0xF8,0x00,0xF8,0x7E,0x00,0x0F,0xC0,0x00,0xF8,0x00,0xF8,0xFC,0x00,0x0F,0xC0,
0x00,0xF8,0x00,0xF8,0xF8,0x00,0x0F,0xC0,0x00,0xF8,0x00,0xF9,0xF8,0x00,0x0F,0xC0,
0x00,0xF8,0x00,0xF9,0xF0,0x00,0x0F,0xC0,0x00,0xF8,0x00,0xFB,0xE0,0x00,0x0F,0xC0,
0x00,0xF8,0x00,0xFB,0xC0,0x00,0x0F,0xC0,0x00,0xF8,0x00,0xFF,0xB8,0x00,0x0F,0xC0,
0x00,0xF8,0x00,0xFF,0xBE,0x00,0x0F,0xC0,0x00,0xF8,0x00,0xFF,0x1F,0x00,0x0F,0xC0,
0x00,0xF8,0x00,0xFE,0x1F,0x80,0x0F,0xC0,0x00,0xF8,0x00,0xF8,0x0F,0xC0,0x0F,0xC0,
0x00,0xF8,0x00,0xF8,0x07,0xE0,0x0F,0xC0,0x00,0xFF,0xFF,0xF8,0x07,0xF0,0x0F,0xC0,
0x00,0xFF,0xFF,0xF8,0x07,0xF0,0x0F,0xC0,0x00,0xF8,0x00,0xF8,0x03,0xF0,0x0F,0xC0,
0x00,0xF8,0x00,0xF8,0x03,0xF8,0x0F,0x80,0x00,0xF8,0x00,0xF8,0x03,0xF8,0x0F,0x80,
0x00,0xF8,0x00,0xF8,0x01,0xF0,0x0F,0x80,0x00,0xF8,0x00,0xF8,0x01,0xF0,0x0F,0x80,
0x00,0xF8,0x00,0xF8,0x01,0xF0,0x0F,0x80,0x00,0xF8,0x00,0xF8,0x00,0x00,0x0F,0x80,
0x00,0xF8,0x00,0xF8,0x00,0x00,0x0F,0x80,0x00,0xF8,0x00,0xF8,0x00,0x00,0x1F,0x80,
0x00,0xF8,0x00,0xF8,0x00,0x00,0x1F,0x80,0x00,0xF8,0x00,0xF8,0x00,0x00,0x1F,0x80,
0x00,0xF8,0x00,0xF8,0x00,0x00,0x1F,0x80,0x00,0xF8,0x00,0xF8,0x00,0x00,0x1F,0x80,
0x00,0xF8,0x00,0xF8,0x00,0x00,0x1F,0x80,0x00,0xF8,0x00,0xF8,0x00,0x00,0x1F,0x80,
0x00,0xF8,0x00,0xF8,0x00,0x00,0x1F,0x80,0x00,0xFF,0xFF,0xF8,0x00,0x00,0x3F,0x80,
0x00,0xFF,0xFF,0xF8,0x01,0xC0,0x3F,0x00,0x00,0xFF,0xFF,0xF8,0x01,0xFF,0xFF,0x00,
0x00,0xF8,0x00,0xF8,0x01,0xFF,0xFF,0x00,0x00,0xF8,0x00,0xF8,0x00,0x3F,0xFF,0x00,
0x00,0xF8,0x00,0xF8,0x00,0x0F,0xFE,0x00,0x00,0xF8,0x00,0xF0,0x00,0x07,0xFC,0x00,
0x00,0xF0,0x00,0xE0,0x00,0x03,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xE0,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

void setup() {

  matrix.begin();
  
 
  // fill the screen with 'black'
  matrix.fillScreen(matrix.Color333(0, 0, 0));
  delay(500);
  /*
   * In the customizeZH function:
   * Parameter 1:Display contents
   * Parameter 2: font size (only 16,32 and 64 three options)
   * Parameter 3: x-axis
   * Parameter 4: y-axis
   * Parameter 5: color
  */
  matrix.customizeZH(test_ZH1, 16, 0, 0, matrix.Color333(7, 0, 0));
  delay(500);
  matrix.customizeZH(test_ZH1, 16, 16, 0, matrix.Color333(0, 7, 0));
  delay(500);
  matrix.customizeZH(test_ZH1, 16, 32, 0, matrix.Color333(0, 0, 7));
  delay(500);
  matrix.customizeZH(test_ZH1, 16, 48, 0, matrix.Color333(7, 7, 0));
  delay(500);
  
  matrix.customizeZH(test_ZH1, 16, 0, 16, matrix.Color333(7, 0, 7));
  delay(500);
  matrix.customizeZH(test_ZH1, 16, 16, 16, matrix.Color333(0, 7, 7));
  delay(500);
  matrix.customizeZH(test_ZH1, 16, 32, 16, matrix.Color333(7, 7, 7));
  delay(500);
  matrix.customizeZH(test_ZH1, 16, 48, 16, matrix.Color333(7, 0, 0));
  delay(500);

  matrix.customizeZH(test_ZH1, 16, 0, 32, matrix.Color333(0, 7, 0));
  delay(500);
  matrix.customizeZH(test_ZH1, 16, 16, 32, matrix.Color333(0, 0, 7));
  delay(500);
  matrix.customizeZH(test_ZH1, 16, 32, 32, matrix.Color333(7, 7, 0));
  delay(500);
  matrix.customizeZH(test_ZH1, 16, 48, 32, matrix.Color333(7, 0, 7));
  delay(500);
  
  matrix.customizeZH(test_ZH1, 16, 0, 48, matrix.Color333(0, 7, 7));
  delay(500);
  matrix.customizeZH(test_ZH1, 16, 16, 48, matrix.Color333(7, 7, 7));
  delay(500);
  matrix.customizeZH(test_ZH1, 16, 32, 48, matrix.Color333(7, 0, 0));
  delay(500);
  matrix.customizeZH(test_ZH1, 16, 48, 48, matrix.Color333(0, 7, 0));
  delay(500);

  // fill the screen with 'black'
  matrix.fillScreen(matrix.Color333(0, 0, 0));
  delay(500);

  matrix.customizeZH(test_ZH2, 32, 0, 0, matrix.Color333(0, 7, 7));
  delay(500);
  matrix.customizeZH(test_ZH2, 32, 32, 0, matrix.Color333(7, 7, 7));
  delay(500);
  matrix.customizeZH(test_ZH2, 32, 0, 32, matrix.Color333(7, 0, 0));
  delay(500);
  matrix.customizeZH(test_ZH2, 32, 32, 32, matrix.Color333(0, 7, 0));
  delay(500);

   // fill the screen with 'black'
  matrix.fillScreen(matrix.Color333(0, 0, 0));
  delay(500);

  matrix.customizeZH(test_ZH3, 64, 0, 0, matrix.Color333(7, 0, 0));
  delay(500);

}

void loop() {
  // do nothing
}
