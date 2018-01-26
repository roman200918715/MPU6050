/**
 * @file
 *          MPU6050_Driver.h
 * @brief
 *          This is a API to driver of MPU6050.
 *
 * @par Developer:
 *          - Francisco Roman Hernandez
 * @par Project or Platform:
 *          OPHYRA
 * @par SW-Component:
 *          Driver MPU6050
 * @note
 *          - n.a.
 *
 * @par Description:
 *          A brief description about the use cases covered by the
 *          API's provided in current file.
 *
 * @par Copyright Notice:
 *
 * MIT License
 *
 * Copyright (c) [2017] [Francisco Roman]
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in 
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 **/

/******************************************************************************
 PREVENT REDUNDANT INCLUSION
 *****************************************************************************/
#ifndef MPU6050_DRIVER_H_
#define MPU6050_DRIVER_H_

/* Language linkage */
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

/******************************************************************************
 INCLUDES
 *****************************************************************************/

/******************************************************************************
 CONSTANTS
 *****************************************************************************/

/******************************************************************************
 TYPEDEFS
 *****************************************************************************/
typedef enum MPU6050_enErrCode
{
    MPU6050_Success = 0x00U,        /**< Process Success                    */
    MPU6050_TimeOutErr              /**< Timeout error occurred             */
}MPU6050_tenErrCode;


MPU6050_tenErrCode enErrorCode;
/*********************
/******************************************************************************
 VARIABLES
 *****************************************************************************/

/******************************************************************************
 MACROS
 *****************************************************************************/

/******************************************************************************
 PROTOTYPES
 *****************************************************************************/

/* Language linkage */
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* MPU6050_DRIVER_H_ */
/******************************************************************************
 END OF FILE
 *****************************************************************************/
