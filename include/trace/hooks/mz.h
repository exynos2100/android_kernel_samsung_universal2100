/* SPDX-License-Identifier: GPL-2.0 */
#undef TRACE_SYSTEM
#define TRACE_SYSTEM mz
#define TRACE_INCLUDE_PATH trace/hooks
#if !defined(_TRACE_HOOK_MZ_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_HOOK_MZ_H
#include <linux/tracepoint.h>
#include <trace/hooks/vendor_hooks.h>
/*
 * Following tracepoints are not exported in tracefs and provide a
 * mechanism for vendor modules to hook and extend functionality
 */
struct task_struct;
DECLARE_HOOK(android_vh_mz_exit,
	TP_PROTO(struct task_struct *p),
	TP_ARGS(p));

#endif /* _TRACE_HOOK_MZ_H */
/* This part must be outside protection */
#include <trace/define_trace.h>
