// PINOUT --------------------------------------------------------------- PINOUT
/* POWER SOURCE PINOUT
PC PSU triggered to ON when pin goes LOW
*/
const int PIN_PSU_POWER = 12;  //PS_ON_PIN   For RAMPS 1.4

/*
 * WIRE
 */
const int PIN_WIRE = 10;  // EXTRUDER 1 For RAMPS 1.4
const int PIN_TEMP = 13;  // ANALOG NUMBERING
int wire_temp = 0;


/*
 * LED
 */

const int LED_PIN     =       13;

/* STEPPER PINOUT
MA -> Upper stepper side A
MB -> Lower stepper side A
*/
const int PIN_MA_STEP = 54;  //X_STEP_PIN For RAMPS 1.4
const int PIN_MA_DIR = 55;  // X_DIR_PIN For RAMPS 1.4
const int PIN_MA_ENB = 38; 

const int PIN_MB_STEP = 60;  // Y_STEP_PIN For RAMPS 1.4
const int PIN_MB_DIR = 61;   // Y_DIR_PIN For RAMPS 1.4
const int PIN_MB_ENB = 56;

const int PIN_MC_STEP = 46;  // Z_STEP_PIN For RAMPS 1.4
const int PIN_MC_DIR = 48;   // Z_DIR_PIN For RAMPS 1.4
const int PIN_MC_ENB = 62;


const int PIN_MD_STEP = 26;  // E0_STEP_PIN For RAMPS 1.4
const int PIN_MD_DIR = 28;   // E0_DIR_PIN For RAMPS 1.4
const int PIN_MD_ENB = 24;

/* LIMIT SWITCH PINOUT 
m/M -> min/max
A/B -> side A or B*/
const int PIN_LSW_MXA = 3;
const int PIN_LSW_mXA = 2;

const int PIN_LSW_MYA = 14;
const int PIN_LSW_mYA = 15;

const int PIN_LSW_MXB = 18;
const int PIN_LSW_mXB = 19;

const int PIN_LSW_MYB = 20;
const int PIN_LSW_mYB = 21;

// PINOUT END ------------------------------------------------------- PINOUT END
