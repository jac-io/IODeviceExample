/*=============================================================================================
*
* kbAlloc.h
*
* ---------------------------------------------------------------------------------------------
*
* MIT License
*
* Copyright(C) 2017 : KUNBUS GmbH, Heerweg 15C, 73370 Denkendorf, Germany
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files(the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions :
*
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
*=============================================================================================
*/

#ifndef KBALLOC_H_INC
#define KBALLOC_H_INC

//+=============================================================================================
//|		Include-Dateien / include files
//+=============================================================================================

//+=============================================================================================
//|		Prototypen / prototypes
//+=============================================================================================
#ifdef __cplusplus
extern "C" { 
#endif 

extern void *kbUT_initHeap(INT8U *pHeap, INT32U i32uLen_p);
extern void *kbUT_malloc(void *pHandle_p, INT8U i8uOwner_p, INT32U i32uLen_p);
extern void *kbUT_calloc(void *pHandle_p, INT8U i8uOwner_p, INT32U i32uLen_p);

extern void kbUT_free(void *pvMem_p);

INT32U kbUT_minFree(void *pHandle_p);

#ifdef  __cplusplus 
} 
#endif 

#endif // KBUTILITIES_H_INC

