#include QMK_KEYBOARD_H
#include "debug.h"
#include "action_layer.h"

enum planck_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
  DVORAK,
  PLOVER,
  LOWER,
  RAISE,
  EXT_PLV,
	M_TOGGLE_EGOS,
	M_DE_OSX_PLUS_CTRLALT,
	SM_KISS,
	SM_FROWN,
	SM_CRY,
	SM_SMILE,
	SM_SMIRK,
	M_Key_KC_BSLS_MODS,
	SM_LAUGH,
  SM_SAD,
  	SM_LLAP,
	CIRC_CTRLCMD,
  DYNAMIC_MACRO_RANGE,
};

#include "dynamic_macro.h"
#include "keymap_extras/keymap_german.h"
#include "keymap_extras/keymap_german_osx.h"

#define BASE 0
#define SYMB 1
#define NUMB 2
#define EGOS 3
#define DYN 4

//enum custom_keycodes {
 // QWERTY=SAFE_RANGE,
  //PLOVER,
  //LOWER,
  //RAISE,
  //EXT_PLV,
  //DYNAMIC_MACRO_RANGE,
//};

#define _______ KC_TRNS

//Tap Dance Declarations
enum {
	TD_ESC_CAPS = 0
};

//Layout keymap.c generated with ErgodoxLayoutGenerator V1.0BETA1
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/**
* Layer: BASE
* /-------------------//-------------------//-------------------//-------------------//-------------------//-------------------//-------------------/                        /-------------------//-------------------//-------------------//-------------------//-------------------//-------------------//-------------------/                       
* | ESC                | 1                  | 2                  | 3                  | 4                  | 5                  | Hold or toggle     |                       | LEAD               | 6                  | 7                  | 8                  | 9                  | 0                  | ß                  |                      
* |                    |                    |                    |                    |                    |                    | Layer NUMB         |                       |                    |                    |                    |                    |                    |                    |                    |                      
* /-------------------//-------------------//-------------------//-------------------//-------------------//-------------------//-------------------/                        /-------------------//-------------------//-------------------//-------------------//-------------------//-------------------//-------------------/                       
* | TAB                | Q                  | W                  | E                  | R                  | T                  | Cmd                |                       | Cmd                | Z                  | U                  | I                  | O                  | P                  | Ü                  |                      
* |                    |                    |                    |                    |                    |                    |                    |                       |                    |                    |                    |                    |                    |                    |                    |                      
* /-------------------//-------------------//-------------------//-------------------//-------------------//-------------------/\-------------------\                        \-------------------\/-------------------//-------------------//-------------------//-------------------//-------------------//-------------------/                       
* | Alt                | A                  | S                  | D                  | F                  | G                  |                                                                 | H                  | J                  | K                  | L                  | Ö                  | Ä                  |                      
* |                    |                    |                    |                    |                    |                    |                                                                 |                    |                    |                    |                    |                    | ALT                |                      
* /-------------------//-------------------//-------------------//-------------------//-------------------//-------------------//-------------------/                        /-------------------//-------------------//-------------------//-------------------//-------------------//-------------------//-------------------/                       
* | Shift              | Y                  | X                  | C                  | V                  | B                  | NO                 |                       | NO                 | N                  | M                  | ,                  | .                  | -                  | Shift              |                      
* |                    | Ctrl               |                    |                    |                    |                    | Meh                |                       | Hyper              |                    |                    |                    |                    | Ctrl               |                    |                      
* \-------------------\\-------------------\\-------------------\\-------------------\\-------------------\\-------------------\\-------------------\                        \-------------------\\-------------------\\-------------------\\-------------------\\-------------------\\-------------------\\-------------------\                       
*                                                                                                                                                                                                                                                                                                                                                      
*                                                                                                                                                                                                                                                                                                                                                      
*                                           /-------------------//-------------------//-------------------//-------------------//-------------------/                                                                                       /-------------------//-------------------//-------------------//-------------------//-------------------/  
*                                           | <                  | LongPress / Type   | Ctrl+Alt           | Shift+Ctrl         | OSL(SMLY)          |                                                                                      | LongPress / Type   | CMD+Shift          | ALT+Shift          | ACUT               | +                  | 
*                                           | SYMB               | DE_OSX_CIRC_CTRLCMD|                    |                    |                    |                                                                                      | Key_BSLS_MODS      |                    |                    |                    | SYMB               | 
*                                           \-------------------\\-------------------\\-------------------\\-------------------\/-------------------//-------------------/   /-------------------//-------------------/                     \-------------------\\-------------------\\-------------------\\-------------------\\-------------------\  
*                                                                                                                               | HOME               | END                |  | LEFT               | RIGHT              |                                                                                                                               
*                                                                                                                               |                    |                    |  |                    |                    |                                                                                                                               
*                                                                                                                               \-------------------\/-------------------/   /-------------------/\-------------------\                                                                                                                                
*                                                                                                                                                    | PGUP               |  | UP                 |                                                                                                                                                    
*                                                                                                                                                    |                    |  |                    |                                                                                                                                                    
*                                                                                                          /-------------------//-------------------//-------------------/   /-------------------//-------------------//-------------------/                                                                                                           
*                                                                                                          | BSPC               | DEL                | PGDN               |  | DOWN               | ENT                | SPC                |                                                                                                          
*                                                                                                          |                    |                    |                    |  |                    |                    |                    |                                                                                                          
*                                                                                                          \-------------------\\-------------------\\-------------------\   \-------------------\\-------------------\\-------------------\                                                                                                           
*                                                                                                                                                                                                                                                                                                                                                      
* 
**/
[BASE]=LAYOUT_ergodox(
//left half
    TD(TD_ESC_CAPS), DE_OSX_1, DE_OSX_2, DE_OSX_3, DE_OSX_4, DE_OSX_5, TT(NUMB), 
    KC_TAB, DE_OSX_Q, DE_OSX_W, DE_OSX_E, DE_OSX_R, DE_OSX_T, KC_LGUI, 
    KC_LALT, DE_OSX_A, DE_OSX_S, DE_OSX_D, DE_OSX_F, DE_OSX_G, 
    KC_LSFT, CTL_T(DE_OSX_Y), DE_OSX_X, DE_OSX_C, DE_OSX_V, DE_OSX_B, MEH_T(KC_NO), 
                  LT(SYMB,DE_OSX_LESS), LCTL(KC_LGUI), LCTL(KC_LALT), LSFT(KC_LCTRL), MO(DYN), 
                                              KC_HOME, KC_END, 
                                                     KC_PGUP, 
                                       KC_BSPC, KC_DEL, KC_PGDN, 
    //right half
    KC_LEAD, DE_OSX_6, DE_OSX_7, DE_OSX_8, DE_OSX_9, DE_OSX_0, DE_OSX_SS, 
    KC_RGUI, DE_OSX_Z, DE_OSX_U, DE_OSX_I, DE_OSX_O, DE_OSX_P, DE_OSX_UE, 
           DE_OSX_H, DE_OSX_J, DE_OSX_K, DE_OSX_L, DE_OSX_OE, ALT_T(DE_OSX_AE), 
    ALL_T(KC_NO), DE_OSX_N, DE_OSX_M, DE_OSX_COMM, DE_OSX_DOT, CTL_T(DE_OSX_MINS), KC_RSFT, 
                         M_Key_KC_BSLS_MODS, LGUI(KC_LSFT), LALT(KC_LSFT), DE_OSX_ACUT, LT(SYMB,DE_OSX_PLUS), 
    KC_LEFT, KC_RIGHT, 
    KC_UP, 
    KC_DOWN, KC_ENT, KC_SPC),
/**
* Layer: SYMB
* /-----------//-----------//-----------//-----------//-----------//-----------//-----------/                /-----------//-----------//-----------//-----------//-----------//-----------//-----------/               
* | APPLICATION| F1         | F2         | F3         | F4         | F5         | F5         |               | F6         | F6         | F7         | F8         | F9         | F10        | F11        |              
* |            |            |            |            |            |            |            |               |            |            |            |            |            |            |            |              
* /-----------//-----------//-----------//-----------//-----------//-----------//-----------/                /-----------//-----------//-----------//-----------//-----------//-----------//-----------/               
* |            | <          | >          | !          | ?          |            |            |               |            | \          | [          | ]          | <          | >          | !          |              
* |            |            |            |            |            |            |            |               |            |            |            |            |            |            |            |              
* /-----------//-----------//-----------//-----------//-----------//-----------/\-----------\                \-----------\/-----------//-----------//-----------//-----------//-----------//-----------/               
* |            | #          | $          | \          | /          | .          |                                         | /          | (          | )          | {          | }          | #          |              
* |            |            |            |            |            |            |                                         |            |            |            |            |            |            |              
* /-----------//-----------//-----------//-----------//-----------//-----------//-----------/                /-----------//-----------//-----------//-----------//-----------//-----------//-----------/               
* |            |            | <          | %          | |          | ~          |            |               |            | |          | ~          |      ^     |            |            |            |              
* |            |            |            |            |            |            |            |               |            |            |            |            |            |            |            |              
* \-----------\\-----------\\-----------\\-----------\\-----------\\-----------\\-----------\                \-----------\\-----------\\-----------\\-----------\\-----------\\-----------\\-----------\               
*                                                                                                                                                                                                                      
*                                                                                                                                                                                                                      
*                           /-----------//-----------//-----------//-----------//-----------/                                                       /-----------//-----------//-----------//-----------//-----------/  
*                           |            |            |            |            |            |                                                      | '          | DQOT       |            | Toggle 5   |            | 
*                           |            |            |            |            |            |                                                      |            |            |            |            |            | 
*                           \-----------\\-----------\\-----------\\-----------\/-----------//-----------/   /-----------//-----------/             \-----------\\-----------\\-----------\\-----------\\-----------\  
*                                                                               |            |            |  | F13        | F12        |                                                                               
*                                                                               |            |            |  |            |            |                                                                               
*                                                                               \-----------\/-----------/   /-----------/\-----------\                                                                                
*                                                                                            |            |  | F14        |                                                                                            
*                                                                                            |            |  |            |                                                                                            
*                                                                  /-----------//-----------//-----------/   /-----------//-----------//-----------/                                                                   
*                                                                  |            | DEL        |            |  | F15        |            |            |                                                                  
*                                                                  |            |            |            |  |            |            |            |                                                                  
*                                                                  \-----------\\-----------\\-----------\   \-----------\\-----------\\-----------\                                                                   
*                                                                                                                                                                                                                      
* 
**/
[SYMB]=LAYOUT_ergodox(
//left half
    KC_APPLICATION, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F5, 
    _______, DE_OSX_LESS, DE_OSX_MORE, DE_OSX_EXLM, DE_OSX_QST, _______, _______, 
    _______, DE_OSX_HASH, DE_OSX_DLR, DE_OSX_BSLS, DE_OSX_SLSH, KC_DOT, 
    _______, _______, DE_OSX_LESS, DE_OSX_PERC, DE_OSX_PIPE, DE_OSX_TILD, _______, 
                  _______, _______, _______, _______, _______, 
                                              _______, _______, 
                                                     _______, 
                                       _______, KC_DEL, _______, 
    //right half
    KC_F6, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, 
    _______, DE_OSX_BSLS, DE_OSX_LBRC, DE_OSX_RBRC, DE_OSX_LESS, DE_OSX_MORE, DE_OSX_EXLM, 
           DE_OSX_SLSH, DE_OSX_LPRN, DE_OSX_RPRN, DE_OSX_LCBR, DE_OSX_RCBR, DE_OSX_HASH, 
    _______, DE_OSX_PIPE, DE_OSX_TILD, _______, _______, _______, _______, 
                         DE_OSX_QUOT, DE_OSX_DQOT, KC_NUBS, M_TOGGLE_EGOS, _______, 
    KC_F13, KC_F12, 
    KC_F14, 
    KC_F15, _______, _______),


/**
* Layer: EGOS
* /--------//--------//--------//--------//--------//--------//--------/             /--------//--------//--------//--------//--------//--------//--------/            
* |         |         |         |         |         |         |         |            |         |         |         |         |         |         |         |           
* |         |         |         |         |         |         |         |            |         |         |         |         |         |         |         |           
* /--------//--------//--------//--------//--------//--------//--------/             /--------//--------//--------//--------//--------//--------//--------/            
* |         |         |         |         |         |         |         |            |         |         |         |         |         |         |         |           
* |         |         |         |         |         |         |         |            |         |         |         |         |         |         |         |           
* /--------//--------//--------//--------//--------//--------/\--------\             \--------\/--------//--------//--------//--------//--------//--------/            
* | Shift   |         |         |         |         |         |                                |         |         |         |         |         |         |           
* |         |         |         |         |         |         |                                |         |         |         |         |         |         |           
* /--------//--------//--------//--------//--------//--------//--------/             /--------//--------//--------//--------//--------//--------//--------/            
* |         |         |         |         |         |         |         |            |         |         |         |         |         |         |         |           
* |         |         |         |         |         |         |         |            |         |         |         |         |         |         |         |           
* \--------\\--------\\--------\\--------\\--------\\--------\\--------\             \--------\\--------\\--------\\--------\\--------\\--------\\--------\            
*                                                                                                                                                                      
*                                                                                                                                                                      
*                     /--------//--------//--------//--------//--------/                                           /--------//--------//--------//--------//--------/  
*                     | Ctrl    |         |         |         |         |                                          |         |         |         | Toggle 5|         | 
*                     |         |         |         |         |         |                                          |         |         |         |         |         | 
*                     \--------\\--------\\--------\\--------\/--------//--------/   /--------//--------/          \--------\\--------\\--------\\--------\\--------\  
*                                                             | F1      | F2      |  |         |         |                                                             
*                                                             |         |         |  |         |         |                                                             
*                                                             \--------\/--------/   /--------/\--------\                                                              
*                                                                       | F3      |  |         |                                                                       
*                                                                       |         |  |         |                                                                       
*                                                   /--------//--------//--------/   /--------//--------//--------/                                                    
*                                                   | SPC     | Ctrl    | F4      |  |         |         |         |                                                   
*                                                   |         |         |         |  |         |         |         |                                                   
*                                                   \--------\\--------\\--------\   \--------\\--------\\--------\                                                    
*                                                                                                                                                                      
* 
**/
[EGOS]=LAYOUT_ergodox(
//left half
    _______, _______, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______, _______, _______, 
    KC_LSFT, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______, _______, _______, 
                  KC_LCTRL, _______, _______, _______, _______, 
                                              KC_F1, KC_F2, 
                                                     KC_F3, 
                                       KC_SPC, KC_LCTRL, KC_F4, 
    //right half
    _______, _______, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______, _______, _______, 
           _______, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______, _______, _______, 
                         _______, _______, _______, M_TOGGLE_EGOS, _______, 
    _______, _______,
    _______, 
    _______, _______, _______),

/**
* Layer: NUMB
* /-----//-----//-----//-----//-----//-----//-----/          /-----//-----//-----//-----//-----//-----//-----/         
* |      |      |      |      |      |      |      |         | MPLY | F6   | F7   | F8   | F9   | F10  | MUTE |        
* |      |      |      |      |      |      |      |         |      |      |      |      |      |      |      |        
* /-----//-----//-----//-----//-----//-----//-----/          /-----//-----//-----//-----//-----//-----//-----/         
* |      |      | BTN1 | UP   | BTN2 | U    |      |         | VOLU | /    | 7    | 8    | 9    | *    | MNXT |        
* |      |      |      |      |      |      |      |         |      |      |      |      |      |      |      |        
* /-----//-----//-----//-----//-----//-----/\-----\          \-----\/-----//-----//-----//-----//-----//-----/         
* |      |      | LEFT | DOWN | RIGHT| D    |                       | =    | 4    | 5    | 6    | +    | MPRV |        
* |      |      |      |      |      |      |                       |      |      |      |      |      |      |        
* /-----//-----//-----//-----//-----//-----//-----/          /-----//-----//-----//-----//-----//-----//-----/         
* |      |      | L    | BTN3 | R    |      |      |         | VOLD | %    | 1    | 2    | 3    |      |      |        
* |      |      |      |      |      |      |      |         |      |      |      |      |      |      |      |        
* \-----\\-----\\-----\\-----\\-----\\-----\\-----\          \-----\\-----\\-----\\-----\\-----\\-----\\-----\         
*                                                                                                                      
*                                                                                                                      
*               /-----//-----//-----//-----//-----/                               /-----//-----//-----//-----//-----/  
*               |      |      |      |      |      |                              | 0    | .    | ,    | =    |      | 
*               |      |      |      |      |      |                              |      |      |      |      |      | 
*               \-----\\-----\\-----\\-----\/-----//-----/   /-----//-----/       \-----\\-----\\-----\\-----\\-----\  
*                                           |      |      |  |      |      |                                           
*                                           |      |      |  |      |      |                                           
*                                           \-----\/-----/   /-----/\-----\                                            
*                                                  |      |  |      |                                                  
*                                                  |      |  |      |                                                  
*                                    /-----//-----//-----/   /-----//-----//-----/                                     
*                                    |      |      |      |  |      |      |      |                                    
*                                    |      |      |      |  |      |      |      |                                    
*                                    \-----\\-----\\-----\   \-----\\-----\\-----\                                     
*                                                                                                                      
* 
**/
[NUMB]=LAYOUT_ergodox(
//left half
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
                  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
                                              KC_TRNS, KC_TRNS, 
                                                     KC_TRNS, 
                                       KC_TRNS, KC_TRNS, KC_TRNS, 
    //right half
    KC_MPLY, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_MUTE, 
    KC_MNXT, DE_OSX_SLSH, KC_7, KC_8, KC_9, DE_OSX_ASTR, KC_VOLU, 
           DE_OSX_SLSH, KC_4, KC_5, KC_6, DE_OSX_PLUS, KC_VOLD, 
    KC_MPRV, DE_OSX_PERC, KC_1, KC_2, KC_3, KC_TRNS, KC_TRNS, 
                         KC_0, KC_DOT, KC_COMM, DE_OSX_EQL, KC_TRNS, 
    KC_TRNS, KC_TRNS, 
    KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS),
/**
* Layer: EGOS
* /--------//--------//--------//--------//--------//--------//--------/             /--------//--------//--------//--------//--------//--------//--------/            
* |         |  REC1   |   REC2  |         |         |         |         |            |         | Typing  |         |         |         |         |         |           
* |         |         |         |         |         |         |         |            |         | SM_KISS |         |         |         |         |         |           
* /--------//--------//--------//--------//--------//--------//--------/             /--------//--------//--------//--------//--------//--------//--------/            
* |         |         |         |         |         |         | PLAY1   |            |  PLAY1  | Typing  | Typing  | Typing  |         |         |         |           
* |         |         |         |         |         |         |         |            |         | SM_FROWN| SM_SAD  | SM_CRY  |         |         |         |           
* /--------//--------//--------//--------//--------//--------/\--------\             \--------\/--------//--------//--------//--------//--------//--------/            
* |         |         |         |         |         |         |                                | Typing  | Typing  | Typing  | LLAP    |         |         |           
* |         |         |         |         |         |         |                                | SM_SMIRK| SM_SMILE| SM_LAUGH|         |         |         |           
* /--------//--------//--------//--------//--------//--------//--------/             /--------//--------//--------//--------//--------//--------//--------/            
* |         |         |         |         |         |         | PLAY2   |            | PLAY2   |         |         |         |         |         |         |           
* |         |         |         |         |         |         |         |            |         |         |         |         |         |         |         |           
* \--------\\--------\\--------\\--------\\--------\\--------\\--------\             \--------\\--------\\--------\\--------\\--------\\--------\\--------\            
*                                                                                                                                                                      
*                                                                                                                                                                      
*                     /--------//--------//--------//--------//--------/                                           /--------//--------//--------//--------//--------/  
*                     |         |         |         |         |         |                                          |         |         |         |         |         | 
*                     |         |         |         |         |         |                                          |         |         |         |         |         | 
*                     \--------\\--------\\--------\\--------\/--------//--------/   /--------//--------/          \--------\\--------\\--------\\--------\\--------\  
*                                                             |         |         |  |         |         |                                                             
*                                                             |         |         |  |         |         |                                                             
*                                                             \--------\/--------/   /--------/\--------\                                                              
*                                                                       |         |  |         |                                                                       
*                                                                       |         |  |         |                                                                       
*                                                   /--------//--------//--------/   /--------//--------//--------/                                                    
*                                                   |         |         |         |  |         |         |         |                                                   
*                                                   |         |         |         |  |         |         |         |                                                   
*                                                   \--------\\--------\\--------\   \--------\\--------\\--------\                                                    
*                                                                                                                                                                      
* 
**/
[DYN]=LAYOUT_ergodox(
//left half
    DYN_REC_STOP, DYN_REC_START1, DYN_REC_START2, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______, _______, DYN_MACRO_PLAY1, 
    _______, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______, _______, DYN_MACRO_PLAY2, 
                  _______, _______, _______, _______, _______, 
                                              _______, _______, 
                                                     _______, 
                                       _______, _______, _______, 
    //right half
    _______, SM_KISS, _______, _______, _______, _______, _______, 
    DYN_MACRO_PLAY1, SM_FROWN, SM_SAD, SM_CRY, _______, _______, _______, 
           SM_SMIRK, SM_SMILE, SM_LAUGH, SM_LLAP, _______, _______, 
    DYN_MACRO_PLAY2, _______, _______, _______, _______, _______, _______, 
                         _______, _______, _______, _______, _______, 
    _______, _______,
    _______, 
    _______, _______, _______),
};

const uint16_t PROGMEM fn_actions[] = {

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_dynamic_macro(keycode, record)) {
        return false;
    }
  
   static uint16_t start;
        switch(keycode) {
	      case M_TOGGLE_EGOS:
            //Macro: M_TOGGLE_EGOS//-----------------------
              if (record->event.pressed){
                       layer_state ^= (1<<EGOS);
                       layer_state &= (1<<EGOS);
              }
              return false;
              break;
	          case SM_KISS:
              //Macro: SM_KISS//-----------------------
              if (record->event.pressed) {
                SEND_STRING(">/}");
                   //SEND_STRING(SS_DOWN(X_LSFT)SS_TAP(X_DOT)SS_UP(X_LSFT)SS_TAP(X_SLSH)SS_DOWN(X_LSFT)SS_TAP(X_RBRC)SS_UP(X_LSFT));
                    //return MACRO(DOWN(KC_LSFT),TYPE(KC_DOT),UP(KC_LSFT),TYPE(KC_SLSH),DOWN(KC_LSFT),TYPE(KC_RBRC),UP(KC_LSFT),END);
                  }
              return false;
              break;
           case SM_SMIRK:
               //Macro: SM_SMIRK//-----------------------
               if (record->event.pressed) {
                    SEND_STRING("</(");
                    //return MACRO(DOWN(KC_LSFT),TYPE(KC_COMM),UP(KC_LSFT),TYPE(KC_SLSH),DOWN(KC_LSFT),TYPE(KC_9),UP(KC_LSFT),END);
                  }
                  return false;
               break;
          case SM_FROWN:
     //Macro: SM_FROWN//-----------------------
     if (record->event.pressed) {
          SEND_STRING(">/"SS_DOWN(X_LALT)"8"SS_UP(X_LALT));
          //return MACRO(DOWN(KC_LSFT),TYPE(KC_DOT),UP(KC_LSFT),TYPE(KC_SLSH),DOWN(KC_LALT),TYPE(KC_8),UP(KC_LALT),END);
        }
        return false;
        break;

    case SM_LLAP:
	if(record->event.pressed){
		SEND_STRING("*llap(");
	}
	return false;
	break;

    case SM_CRY:
     //Macro: SM_CRY//-----------------------
     if (record->event.pressed) {
          SEND_STRING("</*");
          //return MACRO(DOWN(KC_LSFT),TYPE(KC_COMM),UP(KC_LSFT),TYPE(KC_SLSH),DOWN(KC_LSFT),TYPE(KC_8),UP(KC_LSFT),END);
        } 
        return false;
    break;

         case SM_SMILE:
     //Macro: SM_SMILE//-----------------------
     if (record->event.pressed) {
        SEND_STRING(">/(");
      //    return MACRO(DOWN(KC_LSFT),TYPE(KC_DOT),UP(KC_LSFT),TYPE(KC_SLSH),DOWN(KC_LSFT),TYPE(KC_9),UP(KC_LSFT),END);
        }
        return false;
     break;

      case M_Key_KC_BSLS_MODS:
         //Macro: M_Key_KC_BSLS_MODS//-----------------------
         if (record->event.pressed) {
              start = timer_read();
              SEND_STRING(SS_DOWN(X_LALT)SS_DOWN(X_LGUI));
              //return MACRO(DOWN(KC_LALT),DOWN(KC_LGUI),END);
            } else {
              SEND_STRING(SS_UP(X_LALT)SS_UP(X_LGUI));
              if (timer_elapsed(start) <150) {
                SEND_STRING("\\");
                //return MACRO(UP(KC_LALT),UP(KC_LGUI),TYPE(KC_BSLS),END);
              }
            }
            return false;
         break;

     case CIRC_CTRLCMD:
//     //Macro: CIRC_CTRLCMD//-----------------------
        if (record->event.pressed) {
            start = timer_read();
            SEND_STRING(SS_DOWN(X_LCTRL)SS_DOWN(X_LGUI));
            //return MACRO(DOWN(KC_LCTRL),DOWN(KC_LGUI),END);
        } else {
            SEND_STRING(SS_UP(X_LCTRL)SS_UP(X_LGUI));
            if (timer_elapsed(start) <150) {
              SEND_STRING("`");
              //return MACRO(UP(KC_LCTRL),UP(KC_LGUI),TYPE(KC_NUBS),END);
            }
        }
        return false;
        break;
      
     case SM_LAUGH:
          //Macro: SM_LAUGH//-----------------------
        if (record->event.pressed) {
            SEND_STRING(">/D");
    //          return MACRO(DOWN(KC_LSFT),TYPE(KC_DOT),UP(KC_LSFT),TYPE(KC_SLSH),DOWN(KC_LSFT),TYPE(KC_D),UP(KC_LSFT),END);
        }  
        return false;
        break;

    case SM_SAD:
     //Macro: SM_SAD//-----------------------
      if (record->event.pressed) {
        SEND_STRING(">/*");
  //          return MACRO(DOWN(KC_LSFT),TYPE(KC_DOT),UP(KC_LSFT),TYPE(KC_SLSH),DOWN(KC_LSFT),TYPE(KC_8),UP(KC_LSFT),END);
        }
      return false;
      break;

    default:
      return true;
      break;
    }
    return true;
}

// const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
// {
//   static uint16_t start;
//   switch(id) {

//     break;


//     break;

//   }
//   return MACRO_NONE;
// };

//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for Esc, twice for Caps Lock
  [TD_ESC_CAPS]  = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS)
// Other declarations would go here, separated by commas, if you have them
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};

LEADER_EXTERNS();

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
        case SYMB:
            ergodox_right_led_1_on(); 
        break;
        case NUMB:
            ergodox_right_led_3_on();
        break;
        case DYN:
            ergodox_right_led_1_on(); 
            ergodox_right_led_2_on();
            ergodox_right_led_3_on(); 
        break;
        case EGOS:
            ergodox_right_led_2_on();
        break;
        default:
        // none
        break;
    }

    LEADER_DICTIONARY() {
        leading = false;
        leader_end();

        SEQ_ONE_KEY(KC_A) {
            layer_state ^= (1<<EGOS);
            layer_state &= (1<<EGOS);
        }
        /*
        SEQ_TWO_KEYS(KC_A, KC_S) {
          register_code(KC_H);
          unregister_code(KC_H);
        }
        SEQ_THREE_KEYS(KC_A, KC_S, KC_D) {
          register_code(KC_LGUI);
          register_code(KC_S);
          unregister_code(KC_S);
          unregister_code(KC_LGUI);
        }
        */
    }

};

