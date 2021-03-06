#include "stdafx.h"
#include "ULib_BaseCanvas.hpp"

#ifndef ULIB_CANVAS_EXPORTS
#define ULib_CANVAS_API __declspec(dllimport)
#else
#define ULib_CANVAS_API __declspec(dllexport)
#endif

#ifdef __cplusplus
#if __cplusplus
extern "C"
{
#endif
#endif /*__cplusplus*/
	ULib_CANVAS_API HRESULT ULib_Canvas_Initialize(IN CONST CHAR *device, IN CONST CHAR *wndName, IN BYTE index, IN BOOL bHidWnd, IN int canvasWidth, IN int canvasHeight, IN int *pTargetTexturePixels, IN EnumWorkingMode mode = EnumWorkingMode::DataOutput, IN UINT dataFormat = GL_BGRA)
	{
		return (ULib_BaseCanvas::CreateInstance(device, index))->Initialize(device, wndName, canvasWidth, canvasHeight, pTargetTexturePixels, mode, dataFormat);
	}

	ULib_CANVAS_API HRESULT ULib_Canvas_Release(BYTE index)
	{
		return ULib_BaseCanvas::DestoryInstance(index);
	}

	ULib_CANVAS_API HRESULT ULib_Canvas_Update(BYTE index)
	{
		return (ULib_BaseCanvas::Instance(index))->Update();
	}
#ifdef __cplusplus
#if __cplusplus
};
#endif
#endif /*__cplusplus*/