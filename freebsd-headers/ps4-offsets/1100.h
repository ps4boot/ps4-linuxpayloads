//Offsets
//https://gist.github.com/kiwidoggie/4bd0b2b4731c668383548b5d2f9136ba
#pragma once
#define kernel_offset_xfast_syscall 0x1c0
#define kernel_offset_allproc 0x022d0a98
#define kernel_offset_vmspace_acquire_ref 0x00357720
#define kernel_offset_vmspace_free 0x00357550
#define kernel_offset_printf 0x2fcbd0
#define kernel_offset_kmem_alloc 0x00245e10
#define kernel_offset_kernel_map 0x21ff130
#define kernel_offset_sysent 0x1101760
#define kernel_offset_proc_rwmem 0x003838a0
#define kernel_offset_copyin 0x2ddfe0

#define kernel_patch_kmem_alloc_1 0x245edc
#define kernel_patch_kmem_alloc_2 0x245ee4
