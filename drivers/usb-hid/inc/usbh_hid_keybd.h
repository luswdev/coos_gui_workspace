/**
  ******************************************************************************
  * @file    usbh_hid_keybd.h
  * @author  MCD Application Team
  * @version V2.1.0
  * @date    19-March-2012
  * @brief   This file contains all the prototypes for the usbh_hid_keybd.c
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2012 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */

/* Define to prevent recursive -----------------------------------------------*/
#ifndef __USBH_HID_KEYBD_H
#define __USBH_HID_KEYBD_H

/* Includes ------------------------------------------------------------------*/
#include "usb_conf.h"
#include "usbh_hid_core.h"

/** @addtogroup USBH_LIB
  * @{
  */

/** @addtogroup USBH_CLASS
  * @{
  */

/** @addtogroup USBH_HID_CLASS
  * @{
  */
  
/** @defgroup USBH_HID_KEYBD
  * @brief This file is the Header file for USBH_HID_KEYBD.c
  * @{
  */ 


/** @defgroup USBH_HID_KEYBD_Exported_Types
  * @{
  */ 


/**
  * @}
  */ 

/** @defgroup USBH_HID_KEYBD_Exported_Defines
  * @{
  */ 
/* Default keyboard configuration is AZERTY */
#define QWERTY_KEYBOARD
#if !defined(QWERTY_KEYBOARD) && !defined(AZERTY_KEYBOARD)
#define AZERTY_KEYBOARD
#endif

#define  KBD_LEFT_CTRL                                  0x01
#define  KBD_LEFT_SHIFT                                 0x02
#define  KBD_LEFT_ALT                                   0x04
#define  KBD_LEFT_GUI                                   0x08
#define  KBD_RIGHT_CTRL                                 0x10
#define  KBD_RIGHT_SHIFT                                0x20
#define  KBD_RIGHT_ALT                                  0x40
#define  KBD_RIGHT_GUI                                  0x80

#define  KBR_MAX_NBR_PRESSED                            6

#define KBD_HID_IS_SHIFT(k)     ((k) & (KBD_LEFT_SHIFT | KBD_RIGHT_SHIFT))
#define KBD_HID_IS_CTRL(k)      ((k) & (KBD_LEFT_CTRL | KBD_RIGHT_CTRL))
#define KBD_HID_IS_ALT(k)       ((k) & (KBD_LEFT_ALT | KBD_RIGHT_ALT))
#define KBD_HID_IS_GUI(k)       ((k) & (KBD_LEFT_GUI | KBD_RIGHT_GUI))

/**
  * @}
  */ 

/** @defgroup USBH_HID_KEYBD_Exported_Macros
  * @{
  */ 
/**
  * @}
  */ 

/** @defgroup USBH_HID_KEYBD_Exported_Variables
  * @{
  */ 

extern HID_cb_TypeDef HID_KEYBRD_cb;
/**
  * @}
  */ 

/** @defgroup USBH_HID_KEYBD_Exported_FunctionsPrototype
  * @{
  */ 
void  USR_KEYBRD_Init (void);
void  USR_KEYBRD_ProcessData (uint8_t pbuf);
/**
  * @}
  */ 

#endif /* __USBH_HID_KEYBD_H */

/**
  * @}
  */ 

/**
  * @}
  */ 

/**
  * @}
  */ 

/**
  * @}
  */ 

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

