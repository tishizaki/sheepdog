/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "Mocklogger.h"

static const char* CMockString___sd_dump_variable = "__sd_dump_variable";
static const char* CMockString_cmock_arg1 = "cmock_arg1";
static const char* CMockString_dump_logmsg = "dump_logmsg";
static const char* CMockString_early_log_init = "early_log_init";
static const char* CMockString_fmt = "fmt";
static const char* CMockString_format_name = "format_name";
static const char* CMockString_func = "func";
static const char* CMockString_get_loglevel = "get_loglevel";
static const char* CMockString_get_thread_name = "get_thread_name";
static const char* CMockString_level = "level";
static const char* CMockString_line = "line";
static const char* CMockString_log_close = "log_close";
static const char* CMockString_log_init = "log_init";
static const char* CMockString_log_write = "log_write";
static const char* CMockString_name = "name";
static const char* CMockString_new_loglevel = "new_loglevel";
static const char* CMockString_outfile = "outfile";
static const char* CMockString_prio = "prio";
static const char* CMockString_progname = "progname";
static const char* CMockString_sd_backtrace = "sd_backtrace";
static const char* CMockString_set_loglevel = "set_loglevel";
static const char* CMockString_set_thread_name = "set_thread_name";
static const char* CMockString_show_idx = "show_idx";
static const char* CMockString_type = "type";
static const char* CMockString_user_info = "user_info";
static const char* CMockString_var = "var";

typedef struct _CMOCK_early_log_init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char* Expected_format_name;
  struct logger_user_info* Expected_user_info;

} CMOCK_early_log_init_CALL_INSTANCE;

typedef struct _CMOCK_log_init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int ReturnVal;
  char* Expected_progname;
  enum log_dst_type Expected_type;
  int Expected_level;
  char* Expected_outfile;

} CMOCK_log_init_CALL_INSTANCE;

typedef struct _CMOCK_log_close_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_log_close_CALL_INSTANCE;

typedef struct _CMOCK_dump_logmsg_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  void* Expected_cmock_arg1;

} CMOCK_dump_logmsg_CALL_INSTANCE;

typedef struct _CMOCK_log_write_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int Expected_prio;
  char* Expected_func;
  int Expected_line;
  char* Expected_fmt;

} CMOCK_log_write_CALL_INSTANCE;

typedef struct _CMOCK_set_thread_name_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char* Expected_name;
  bool Expected_show_idx;

} CMOCK_set_thread_name_CALL_INSTANCE;

typedef struct _CMOCK_get_thread_name_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char* Expected_name;

} CMOCK_get_thread_name_CALL_INSTANCE;

typedef struct _CMOCK___sd_dump_variable_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int ReturnVal;
  char* Expected_var;

} CMOCK___sd_dump_variable_CALL_INSTANCE;

typedef struct _CMOCK_sd_backtrace_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_sd_backtrace_CALL_INSTANCE;

typedef struct _CMOCK_set_loglevel_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int Expected_new_loglevel;

} CMOCK_set_loglevel_CALL_INSTANCE;

typedef struct _CMOCK_get_loglevel_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int ReturnVal;

} CMOCK_get_loglevel_CALL_INSTANCE;

static struct MockloggerInstance
{
  CMOCK_MEM_INDEX_TYPE early_log_init_CallInstance;
  CMOCK_MEM_INDEX_TYPE log_init_CallInstance;
  CMOCK_MEM_INDEX_TYPE log_close_CallInstance;
  CMOCK_MEM_INDEX_TYPE dump_logmsg_CallInstance;
  CMOCK_MEM_INDEX_TYPE log_write_CallInstance;
  CMOCK_MEM_INDEX_TYPE set_thread_name_CallInstance;
  CMOCK_MEM_INDEX_TYPE get_thread_name_CallInstance;
  CMOCK_MEM_INDEX_TYPE __sd_dump_variable_CallInstance;
  CMOCK_MEM_INDEX_TYPE sd_backtrace_CallInstance;
  CMOCK_MEM_INDEX_TYPE set_loglevel_CallInstance;
  CMOCK_MEM_INDEX_TYPE get_loglevel_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void Mocklogger_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_SET_DETAIL(CMockString_early_log_init);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.early_log_init_CallInstance, cmock_line, CMockStringCalledLess);
  UNITY_SET_DETAIL(CMockString_log_init);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.log_init_CallInstance, cmock_line, CMockStringCalledLess);
  UNITY_SET_DETAIL(CMockString_log_close);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.log_close_CallInstance, cmock_line, CMockStringCalledLess);
  UNITY_SET_DETAIL(CMockString_dump_logmsg);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.dump_logmsg_CallInstance, cmock_line, CMockStringCalledLess);
  UNITY_SET_DETAIL(CMockString_log_write);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.log_write_CallInstance, cmock_line, CMockStringCalledLess);
  UNITY_SET_DETAIL(CMockString_set_thread_name);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.set_thread_name_CallInstance, cmock_line, CMockStringCalledLess);
  UNITY_SET_DETAIL(CMockString_get_thread_name);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.get_thread_name_CallInstance, cmock_line, CMockStringCalledLess);
  UNITY_SET_DETAIL(CMockString___sd_dump_variable);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.__sd_dump_variable_CallInstance, cmock_line, CMockStringCalledLess);
  UNITY_SET_DETAIL(CMockString_sd_backtrace);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.sd_backtrace_CallInstance, cmock_line, CMockStringCalledLess);
  UNITY_SET_DETAIL(CMockString_set_loglevel);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.set_loglevel_CallInstance, cmock_line, CMockStringCalledLess);
  UNITY_SET_DETAIL(CMockString_get_loglevel);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.get_loglevel_CallInstance, cmock_line, CMockStringCalledLess);
}

void Mocklogger_Init(void)
{
  Mocklogger_Destroy();
}

void Mocklogger_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

void early_log_init(const char* format_name, struct logger_user_info* user_info)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_SET_DETAIL(CMockString_early_log_init);
  CMOCK_early_log_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_early_log_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.early_log_init_CallInstance);
  Mock.early_log_init_CallInstance = CMock_Guts_MemNext(Mock.early_log_init_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_early_log_init,CMockString_format_name);
    UNITY_TEST_ASSERT_EQUAL_STRING(cmock_call_instance->Expected_format_name, format_name, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_early_log_init,CMockString_user_info);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_user_info), (void*)(user_info), sizeof(struct logger_user_info), cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_early_log_init(CMOCK_early_log_init_CALL_INSTANCE* cmock_call_instance, const char* format_name, struct logger_user_info* user_info)
{
  cmock_call_instance->Expected_format_name = (char*)format_name;
  cmock_call_instance->Expected_user_info = user_info;
}

void early_log_init_CMockExpect(UNITY_LINE_TYPE cmock_line, const char* format_name, struct logger_user_info* user_info)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_early_log_init_CALL_INSTANCE));
  CMOCK_early_log_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_early_log_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.early_log_init_CallInstance = CMock_Guts_MemChain(Mock.early_log_init_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_early_log_init(cmock_call_instance, format_name, user_info);
  UNITY_CLR_DETAILS();
}

int log_init(const char* progname, enum log_dst_type type, int level, char* outfile)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_SET_DETAIL(CMockString_log_init);
  CMOCK_log_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_log_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.log_init_CallInstance);
  Mock.log_init_CallInstance = CMock_Guts_MemNext(Mock.log_init_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_log_init,CMockString_progname);
    UNITY_TEST_ASSERT_EQUAL_STRING(cmock_call_instance->Expected_progname, progname, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_log_init,CMockString_type);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_type), (void*)(&type), sizeof(enum log_dst_type), cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_log_init,CMockString_level);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_level, level, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_log_init,CMockString_outfile);
    UNITY_TEST_ASSERT_EQUAL_STRING(cmock_call_instance->Expected_outfile, outfile, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_log_init(CMOCK_log_init_CALL_INSTANCE* cmock_call_instance, const char* progname, enum log_dst_type type, int level, char* outfile)
{
  cmock_call_instance->Expected_progname = (char*)progname;
  memcpy(&cmock_call_instance->Expected_type, &type, sizeof(enum log_dst_type));
  cmock_call_instance->Expected_level = level;
  cmock_call_instance->Expected_outfile = outfile;
}

void log_init_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const char* progname, enum log_dst_type type, int level, char* outfile, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_log_init_CALL_INSTANCE));
  CMOCK_log_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_log_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.log_init_CallInstance = CMock_Guts_MemChain(Mock.log_init_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_log_init(cmock_call_instance, progname, type, level, outfile);
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void log_close(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_SET_DETAIL(CMockString_log_close);
  CMOCK_log_close_CALL_INSTANCE* cmock_call_instance = (CMOCK_log_close_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.log_close_CallInstance);
  Mock.log_close_CallInstance = CMock_Guts_MemNext(Mock.log_close_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
}

void log_close_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_log_close_CALL_INSTANCE));
  CMOCK_log_close_CALL_INSTANCE* cmock_call_instance = (CMOCK_log_close_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.log_close_CallInstance = CMock_Guts_MemChain(Mock.log_close_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  UNITY_CLR_DETAILS();
}

void dump_logmsg(void* cmock_arg1)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_SET_DETAIL(CMockString_dump_logmsg);
  CMOCK_dump_logmsg_CALL_INSTANCE* cmock_call_instance = (CMOCK_dump_logmsg_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.dump_logmsg_CallInstance);
  Mock.dump_logmsg_CallInstance = CMock_Guts_MemNext(Mock.dump_logmsg_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_dump_logmsg,CMockString_cmock_arg1);
    if (cmock_call_instance->Expected_cmock_arg1 == NULL)
      { UNITY_TEST_ASSERT_NULL(cmock_arg1, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_HEX8_ARRAY(cmock_call_instance->Expected_cmock_arg1, cmock_arg1, 1, cmock_line, CMockStringMismatch); }
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_dump_logmsg(CMOCK_dump_logmsg_CALL_INSTANCE* cmock_call_instance, void* cmock_arg1)
{
  cmock_call_instance->Expected_cmock_arg1 = cmock_arg1;
}

void dump_logmsg_CMockExpect(UNITY_LINE_TYPE cmock_line, void* cmock_arg1)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_dump_logmsg_CALL_INSTANCE));
  CMOCK_dump_logmsg_CALL_INSTANCE* cmock_call_instance = (CMOCK_dump_logmsg_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.dump_logmsg_CallInstance = CMock_Guts_MemChain(Mock.dump_logmsg_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_dump_logmsg(cmock_call_instance, cmock_arg1);
  UNITY_CLR_DETAILS();
}

void log_write(int prio, const char* func, int line, const char* fmt, ...)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_SET_DETAIL(CMockString_log_write);
  CMOCK_log_write_CALL_INSTANCE* cmock_call_instance = (CMOCK_log_write_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.log_write_CallInstance);
  Mock.log_write_CallInstance = CMock_Guts_MemNext(Mock.log_write_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_log_write,CMockString_prio);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_prio, prio, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_log_write,CMockString_func);
    UNITY_TEST_ASSERT_EQUAL_STRING(cmock_call_instance->Expected_func, func, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_log_write,CMockString_line);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_line, line, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_log_write,CMockString_fmt);
    UNITY_TEST_ASSERT_EQUAL_STRING(cmock_call_instance->Expected_fmt, fmt, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_log_write(CMOCK_log_write_CALL_INSTANCE* cmock_call_instance, int prio, const char* func, int line, const char* fmt)
{
  cmock_call_instance->Expected_prio = prio;
  cmock_call_instance->Expected_func = (char*)func;
  cmock_call_instance->Expected_line = line;
  cmock_call_instance->Expected_fmt = (char*)fmt;
}

void log_write_CMockExpect(UNITY_LINE_TYPE cmock_line, int prio, const char* func, int line, const char* fmt)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_log_write_CALL_INSTANCE));
  CMOCK_log_write_CALL_INSTANCE* cmock_call_instance = (CMOCK_log_write_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.log_write_CallInstance = CMock_Guts_MemChain(Mock.log_write_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_log_write(cmock_call_instance, prio, func, line, fmt);
  UNITY_CLR_DETAILS();
}

void set_thread_name(const char* name, bool show_idx)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_SET_DETAIL(CMockString_set_thread_name);
  CMOCK_set_thread_name_CALL_INSTANCE* cmock_call_instance = (CMOCK_set_thread_name_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.set_thread_name_CallInstance);
  Mock.set_thread_name_CallInstance = CMock_Guts_MemNext(Mock.set_thread_name_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_set_thread_name,CMockString_name);
    UNITY_TEST_ASSERT_EQUAL_STRING(cmock_call_instance->Expected_name, name, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_set_thread_name,CMockString_show_idx);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_show_idx, show_idx, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_set_thread_name(CMOCK_set_thread_name_CALL_INSTANCE* cmock_call_instance, const char* name, bool show_idx)
{
  cmock_call_instance->Expected_name = (char*)name;
  cmock_call_instance->Expected_show_idx = show_idx;
}

void set_thread_name_CMockExpect(UNITY_LINE_TYPE cmock_line, const char* name, bool show_idx)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_set_thread_name_CALL_INSTANCE));
  CMOCK_set_thread_name_CALL_INSTANCE* cmock_call_instance = (CMOCK_set_thread_name_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.set_thread_name_CallInstance = CMock_Guts_MemChain(Mock.set_thread_name_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_set_thread_name(cmock_call_instance, name, show_idx);
  UNITY_CLR_DETAILS();
}

void get_thread_name(char* name)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_SET_DETAIL(CMockString_get_thread_name);
  CMOCK_get_thread_name_CALL_INSTANCE* cmock_call_instance = (CMOCK_get_thread_name_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.get_thread_name_CallInstance);
  Mock.get_thread_name_CallInstance = CMock_Guts_MemNext(Mock.get_thread_name_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_get_thread_name,CMockString_name);
    UNITY_TEST_ASSERT_EQUAL_STRING(cmock_call_instance->Expected_name, name, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_get_thread_name(CMOCK_get_thread_name_CALL_INSTANCE* cmock_call_instance, char* name)
{
  cmock_call_instance->Expected_name = name;
}

void get_thread_name_CMockExpect(UNITY_LINE_TYPE cmock_line, char* name)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_get_thread_name_CALL_INSTANCE));
  CMOCK_get_thread_name_CALL_INSTANCE* cmock_call_instance = (CMOCK_get_thread_name_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.get_thread_name_CallInstance = CMock_Guts_MemChain(Mock.get_thread_name_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_get_thread_name(cmock_call_instance, name);
  UNITY_CLR_DETAILS();
}

int __sd_dump_variable(const char* var)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_SET_DETAIL(CMockString___sd_dump_variable);
  CMOCK___sd_dump_variable_CALL_INSTANCE* cmock_call_instance = (CMOCK___sd_dump_variable_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.__sd_dump_variable_CallInstance);
  Mock.__sd_dump_variable_CallInstance = CMock_Guts_MemNext(Mock.__sd_dump_variable_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString___sd_dump_variable,CMockString_var);
    UNITY_TEST_ASSERT_EQUAL_STRING(cmock_call_instance->Expected_var, var, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters___sd_dump_variable(CMOCK___sd_dump_variable_CALL_INSTANCE* cmock_call_instance, const char* var)
{
  cmock_call_instance->Expected_var = (char*)var;
}

void __sd_dump_variable_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const char* var, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK___sd_dump_variable_CALL_INSTANCE));
  CMOCK___sd_dump_variable_CALL_INSTANCE* cmock_call_instance = (CMOCK___sd_dump_variable_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.__sd_dump_variable_CallInstance = CMock_Guts_MemChain(Mock.__sd_dump_variable_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters___sd_dump_variable(cmock_call_instance, var);
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void sd_backtrace(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_SET_DETAIL(CMockString_sd_backtrace);
  CMOCK_sd_backtrace_CALL_INSTANCE* cmock_call_instance = (CMOCK_sd_backtrace_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.sd_backtrace_CallInstance);
  Mock.sd_backtrace_CallInstance = CMock_Guts_MemNext(Mock.sd_backtrace_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
}

void sd_backtrace_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_sd_backtrace_CALL_INSTANCE));
  CMOCK_sd_backtrace_CALL_INSTANCE* cmock_call_instance = (CMOCK_sd_backtrace_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.sd_backtrace_CallInstance = CMock_Guts_MemChain(Mock.sd_backtrace_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  UNITY_CLR_DETAILS();
}

void set_loglevel(int new_loglevel)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_SET_DETAIL(CMockString_set_loglevel);
  CMOCK_set_loglevel_CALL_INSTANCE* cmock_call_instance = (CMOCK_set_loglevel_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.set_loglevel_CallInstance);
  Mock.set_loglevel_CallInstance = CMock_Guts_MemNext(Mock.set_loglevel_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_set_loglevel,CMockString_new_loglevel);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_new_loglevel, new_loglevel, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_set_loglevel(CMOCK_set_loglevel_CALL_INSTANCE* cmock_call_instance, int new_loglevel)
{
  cmock_call_instance->Expected_new_loglevel = new_loglevel;
}

void set_loglevel_CMockExpect(UNITY_LINE_TYPE cmock_line, int new_loglevel)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_set_loglevel_CALL_INSTANCE));
  CMOCK_set_loglevel_CALL_INSTANCE* cmock_call_instance = (CMOCK_set_loglevel_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.set_loglevel_CallInstance = CMock_Guts_MemChain(Mock.set_loglevel_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_set_loglevel(cmock_call_instance, new_loglevel);
  UNITY_CLR_DETAILS();
}

int get_loglevel(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_SET_DETAIL(CMockString_get_loglevel);
  CMOCK_get_loglevel_CALL_INSTANCE* cmock_call_instance = (CMOCK_get_loglevel_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.get_loglevel_CallInstance);
  Mock.get_loglevel_CallInstance = CMock_Guts_MemNext(Mock.get_loglevel_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void get_loglevel_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_get_loglevel_CALL_INSTANCE));
  CMOCK_get_loglevel_CALL_INSTANCE* cmock_call_instance = (CMOCK_get_loglevel_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.get_loglevel_CallInstance = CMock_Guts_MemChain(Mock.get_loglevel_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

