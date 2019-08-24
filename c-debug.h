#ifndef __C_DEBUG_H__
#define __C_DEBUG_H__

#ifdef __cplusplus
extern "C" {
#endif

#define C_DEBUG_PRINT_X32(x) printf("[%s:%s:%d] @(0x%08x) %s = 0x%x\n", __FILE__, __FUNCTION__, __LINE__, (unsigned int) &x, #x, x)
#define C_DEBUG_PRINT_CALL_RETURN_VOID(x) printf("[%s:%s:%d] %s\n", __FILE__, __FUNCTION__, __LINE__, #x); x
#define C_DEBUG_PRINT_CALL_RETURN_X32(x) printf("[%s:%s:%d] %s = 0x%x\n", __FILE__, __FUNCTION__, __LINE__, #x, x)
#ifdef __cplusplus
}
#endif

#endif /* __C_DEBUG_H__ */
