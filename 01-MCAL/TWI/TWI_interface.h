/**
 * @file TWI_interface.h
 * @author Adham Eid (adhameid0@gmail.com)
 * @brief 
 * @version 1.0
 * @date 23-05-2021
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef TWI_INTERFACE_H_
#define TWI_INTERFACE_H_

void TWI_voidInit();
void TWI_voidDisableAck();
void TWI_voidEnableAck();
u8 TWI_u8SendByte(u8 Copy_u8SlaveAddress, u8 Copy_u8Data);
u8 TWI_u8ReceiveByte(u8 Copy_u8SlaveAddress, u8* Copy_u8Data);

#endif