#ifdef PS4_3_55

#define kern_off_printf 0x1df550
#define kern_off_copyin 0x3b96e0
#define kern_off_copyout 0x3b9660
#define kern_off_copyinstr 0x3b9a50
#define kern_off_kmem_alloc_contig 0x337ea0
#define kern_off_kmem_free 0x33bca0
#define kern_off_pmap_extract 0x3afd70
#define kern_off_pmap_protect 0x3b1f50
#define kern_off_sched_pin 0x1ced60
#define kern_off_sched_unpin 0x1cedc0
#define kern_off_smp_rendezvous 0x1e7810
#define kern_off_smp_no_rendevous_barrier 0x1e75d0
#define kern_off_icc_query_nowait 0x3ed450
#define kern_off_kernel_map 0x196acc8
#define kern_off_sysent 0xeed880
#define kern_off_kernel_pmap_store 0x19bd628
#define kern_off_Starsha_UcodeInfo 0x1869fa0

#define kern_off_pml4pml4i 0x19bd618
#define kern_off_dmpml4i 0x19bd61c
#define kern_off_dmpdpi 0x19bd620

#elif defined PS4_3_70

#define kern_off_printf 0x1df620
#define kern_off_copyin 0x3b97d0
#define kern_off_copyout 0x3b9750
#define kern_off_copyinstr 0x3b9b40
#define kern_off_kmem_alloc_contig 0x337f70
#define kern_off_kmem_free 0x33bd70
#define kern_off_pmap_extract 0x3afe60
#define kern_off_pmap_protect 0x3b2040
#define kern_off_sched_pin 0x1cee30
#define kern_off_sched_unpin 0x1cee90
#define kern_off_smp_rendezvous 0x1e78e0
#define kern_off_smp_no_rendevous_barrier 0x1e76a0
#define kern_off_icc_query_nowait 0x3ed7f0
#define kern_off_kernel_map 0x1976cc8
#define kern_off_sysent 0xef6d90
#define kern_off_kernel_pmap_store 0x19c9628
#define kern_off_Starsha_UcodeInfo 0
#define kern_off_gpu_devid_is_9924 0x443a20
#define kern_off_gc_get_fw_info 0x44b5a0

#define kern_off_pml4pml4i 0x19c9618
#define kern_off_dmpml4i 0x19c961c
#define kern_off_dmpdpi 0x19c9620

#elif defined PS4_4_00 || PS4_4_01

#define kern_off_printf 0x347450
#define kern_off_copyin 0x286cc0
#define kern_off_copyout 0x286c40
#define kern_off_copyinstr 0x287030
#define kern_off_kmem_alloc_contig 0x275da0
#define kern_off_kmem_free 0x369580
#define kern_off_pmap_extract 0x3eeed0
#define kern_off_pmap_protect 0x3f1120
#define kern_off_sched_pin 0x1d1120
#define kern_off_sched_unpin 0x1d1180
#define kern_off_smp_rendezvous 0x34a020
#define kern_off_smp_no_rendevous_barrier 0x349de0
#define kern_off_icc_query_nowait 0x46c5a0
#define kern_off_kernel_map 0x1fe71b8
#define kern_off_sysent 0xf17790
#define kern_off_kernel_pmap_store 0x200c310
#define kern_off_Starsha_UcodeInfo 0x18dafb0

#define kern_off_pml4pml4i 0x200c300
#define kern_off_dmpml4i 0x200c304
#define kern_off_dmpdpi 0x200c308

#elif defined PS4_4_05

#define kern_off_printf 0x347580
#define kern_off_copyin 0x286df0
#define kern_off_copyout 0x286d70
#define kern_off_copyinstr 0x287160
#define kern_off_kmem_alloc_contig 0x275ed0
#define kern_off_kmem_free 0x3696b0
#define kern_off_pmap_extract 0x3ef000
#define kern_off_pmap_protect 0x3f1250
#define kern_off_sched_pin 0x1d1250
#define kern_off_sched_unpin 0x1d12B0
#define kern_off_smp_rendezvous 0x34a150
#define kern_off_smp_no_rendevous_barrier 0x349f10
#define kern_off_icc_query_nowait 0x46c6d0
#define kern_off_kernel_map 0x1fe71b8
#define kern_off_sysent 0xf17790
#define kern_off_kernel_pmap_store 0x200c310
#define kern_off_Starsha_UcodeInfo 0
#define kern_off_gpu_devid_is_9924 0x4b9030
#define kern_off_gc_get_fw_info 0x4a19a0

#define kern_off_pml4pml4i 0x200c300
#define kern_off_dmpml4i 0x200c304
#define kern_off_dmpdpi 0x200c308

#elif defined PS4_4_55

#define kern_off_printf 0x17F30
#define kern_off_copyin 0x14A890
#define kern_off_copyout 0x14A7B0
#define kern_off_copyinstr 0x14AD00
#define kern_off_kmem_alloc_contig 0x250320
#define kern_off_kmem_free 0x16EEA0
#define kern_off_pmap_extract 0x41DBC0
#define kern_off_pmap_protect 0x420310
#define kern_off_sched_pin 0x73770
#define kern_off_sched_unpin 0x73780
#define kern_off_smp_rendezvous 0xB2BB0
#define kern_off_smp_no_rendevous_barrier 0xB2970
#define kern_off_icc_query_nowait 0x808C0
#define kern_off_kernel_map 0x1B31218
#define kern_off_sysent 0x102B690
#define kern_off_kernel_pmap_store 0x21BCC38
#define kern_off_Starsha_UcodeInfo 0
#define kern_off_gpu_devid_is_9924 0x496720
#define kern_off_gc_get_fw_info 0x4A12D0

#define kern_off_pml4pml4i 0x21BCC28
#define kern_off_dmpml4i 0x21BCC2C
#define kern_off_dmpdpi 0x21BCC30

#elif defined PS4_5_01

#define kern_off_printf 0x00435C70
#define kern_off_copyin 0x1EA600
#define kern_off_copyout 0x1EA520
#define kern_off_copyinstr 0x1EAA30
#define kern_off_kmem_alloc_contig 0xF1B80
#define kern_off_kmem_free 0xFCD40
#define kern_off_pmap_extract 0x2E02A0
#define kern_off_pmap_protect 0x2E2D00
#define kern_off_sched_pin 0x31FB70
#define kern_off_sched_unpin 0x31FB80
#define kern_off_smp_rendezvous 0x1B84A0
#define kern_off_smp_no_rendevous_barrier 0x1B8260
#define kern_off_icc_query_nowait 0x44020
#define kern_off_kernel_map 0x1AC60E0
#define kern_off_sysent 0x107C610
#define kern_off_kernel_pmap_store 0x22CB4F0
#define kern_off_Starsha_UcodeInfo 0
#define kern_off_gpu_devid_is_9924 0x4DDC40
#define kern_off_gc_get_fw_info 0x4D33D0

#define kern_off_pml4pml4i 0x22CB4E0
#define kern_off_dmpml4i 0x22CB4E4
#define kern_off_dmpdpi 0x22CB4E8

#elif defined PS4_5_05
#define kern_off_printf								0x436040
#define kern_off_snprintf 							0x436350
#define kern_off_copyin								0x1EA710
#define kern_off_copyout							0x1EA630
#define kern_off_copyinstr							0x1EAB40
#define kern_off_kmem_alloc_contig					0xF1C90
#define kern_off_kmem_free							0xFCE50
#define kern_off_pmap_extract						0x2E0570
#define kern_off_pmap_protect						0x2E3090
#define kern_off_sched_pin							0x31FF40
#define kern_off_sched_unpin						0x31FF50
#define kern_off_smp_rendezvous						0x1B85B0
#define kern_off_smp_no_rendevous_barrier			0x1B8370
#define kern_off_icc_query_nowait					0x44020
#define kern_off_kernel_map							0x1AC60E0
#define kern_off_sysent								0x107C610
#define kern_off_kernel_pmap_store					0x22CB570
#define kern_off_Starsha_UcodeInfo					0
#define kern_off_gpu_devid_is_9924					0x4DE010
#define kern_off_gc_get_fw_info						0x4D37A0
#define kern_off_pml4pml4i							0x22CB560
#define kern_off_dmpml4i							0x22CB564
#define kern_off_dmpdpi								0x22CB568
#define kern_off_eap_hdd_key						0x2790C90
#define kern_off_edid								0x281A3F4
#define kern_off_wlanbt							    0x2BFBA0
#define kern_off_kern_reboot						0x10D390

#elif defined PS4_6_72
#define kern_off_printf								0x123280
#define kern_off_snprintf 							0x123590
#define kern_off_copyin								0x3C17A0
#define kern_off_copyout							0x3C16B0
#define kern_off_copyinstr							0x3C1C50
#define kern_off_kmem_alloc_contig					0x0B71C0
#define kern_off_kmem_free							0x250900
#define kern_off_pmap_extract						0x04E420
#define kern_off_pmap_protect						0x050F50
#define kern_off_sched_pin							0x446A30
#define kern_off_sched_unpin						0x446A40
#define kern_off_smp_rendezvous						0x2C93C0
#define kern_off_smp_no_rendevous_barrier			0x2C9180
#define kern_off_icc_query_nowait					0x3F290
#define kern_off_kernel_map							0x220DFC0
#define kern_off_sysent								0x111E000
#define kern_off_kernel_pmap_store					0x1BB7880
#define kern_off_Starsha_UcodeInfo					0
#define kern_off_gpu_devid_is_9924					0x4E82D0
#define kern_off_gc_get_fw_info						0x4E1A50
#define kern_off_pml4pml4i							0x1BB7870
#define kern_off_dmpml4i							0x1BB7874
#define kern_off_dmpdpi								0x1BB7878
#define kern_off_eap_hdd_key						0x26DCCD0
#define kern_off_edid								0x2764100
#define kern_off_wlanbt							    0x1CDD80
#define kern_off_kern_reboot						0x206D50

#elif defined PS4_7_00
//credit: https://github.com/tihmstar
#define kern_off_printf 0x000BC730 //mira
#define kern_off_snprintf 0x000BCA30 //mira
#define kern_off_copyin 0x0002F230 //mira
#define kern_off_copyout 0x0002F140 //mira
#define kern_off_copyinstr 0x0002F6E0 //mira
#define kern_off_kmem_alloc_contig 0x430780 //unsure
#define kern_off_kmem_free 0x001172C0 //mira
#define kern_off_pmap_extract 0x3ded30
#define kern_off_pmap_protect 0x3dff70
#define kern_off_sched_pin 0x329870
#define kern_off_sched_unpin 0x329890
#define kern_off_smp_rendezvous 0x4447a0
#define kern_off_smp_no_rendevous_barrier 0x444560
#define kern_off_icc_query_nowait 0x3b2f80
#define kern_off_kernel_map 0x021C8EE0 //mira
#define kern_off_sysent 0x01125660 //mira
#define kern_off_kernel_pmap_store 0x22c5268
#define kern_off_Starsha_UcodeInfo 0
#define kern_off_gpu_devid_is_9924 0x4ee3c0
#define kern_off_gc_get_fw_info 0x4f6830
#define kern_off_pml4pml4i 0x22c5258
#define kern_off_dmpml4i 0x22c525c
#define kern_off_dmpdpi 0x22c5260
#define kern_off_eap_hdd_key 0x26e0cd0
#define kern_off_edid 0x27645e0
#define kern_off_wlanbt 0xdecb0
#define kern_off_kern_reboot 0x002CD780 //mira

#elif defined PS4_7_55
#define kern_off_printf	0x26F740   //mira
#define kern_off_snprintf 0x26FA40  //mira
#define kern_off_copyin	0x28F9F0  //mira
#define kern_off_copyout 0x28F900  //mira
#define kern_off_copyinstr 0x28FEA0  //mira
#define kern_off_kmem_alloc_contig 0x49DF40 
#define kern_off_kmem_free 0x1755B0  //mira
#define kern_off_pmap_extract 0x1A6D70
#define kern_off_pmap_protect 0x1A7F10
#define kern_off_sched_pin 0x191410
#define kern_off_sched_unpin 0x191430
#define kern_off_smp_rendezvous	0x26CEC0
#define kern_off_smp_no_rendevous_barrier 0x26CC90
#define kern_off_icc_query_nowait 0x1629D0
#define kern_off_kernel_map 0x21405B8 //mira
#define kern_off_sysent	0x1122340 //mira
#define kern_off_kernel_pmap_store 0x215EA40
#define kern_off_Starsha_UcodeInfo 0
#define kern_off_gpu_devid_is_9924 0x4E4560
#define kern_off_gc_get_fw_info	0x4F8FE0
#define kern_off_pml4pml4i 0x215EA30 // (lea     rdx, kern_off_pml4pml4i => movsxd  rdi, cs:kern_off_pml4pml4i)c
#define kern_off_dmpml4i 0x215EA34 
#define kern_off_dmpdpi	0x215EA38
#define kern_off_eap_hdd_key 0x26D4C90
#define kern_off_edid 0x275C0D0
#define kern_off_wlanbt	0xE3B70
#define kern_off_kern_reboot 0x02CD780 // mira

#elif defined PS4_9_00
#define kern_off_printf	0x0B7A30 //mira
#define kern_off_snprintf 0x0B7D30 //mira
#define kern_off_copyin	0x2716A0 //mira
#define kern_off_copyout 0x2715B0 //mira
#define kern_off_copyinstr 0x271B50 //mira
#define kern_off_kmem_alloc_contig 0x270880
#define kern_off_kmem_free 0x37C040 //mira
#define kern_off_pmap_extract 0x12D050
#define kern_off_pmap_protect 0x12E1F0
#define kern_off_sched_pin 0x1CD0D0
#define kern_off_sched_unpin 0x1CD0F0
#define kern_off_smp_rendezvous	0x432BF0
#define kern_off_smp_no_rendevous_barrier 0x432A00
#define kern_off_icc_query_nowait 0x2E1760
#define kern_off_kernel_map 0x2268D48 //mira
#define kern_off_sysent	0x1100310 //mira
#define kern_off_kernel_pmap_store 0x1B904B0
#define kern_off_Starsha_UcodeInfo 0
#define kern_off_gpu_devid_is_9924 0x4AC260
#define kern_off_gc_get_fw_info	0x4DF280
#define kern_off_pml4pml4i 0x1B904A0 // (lea     rdx, kern_off_pml4pml4i => movsxd  rdi, cs:kern_off_pml4pml4i)c
#define kern_off_dmpml4i 0x1B904A4 
#define kern_off_dmpdpi	0x1B904A8
#define kern_off_eap_hdd_key 0x26C4C90
#define kern_off_edid 0x274C058
#define kern_off_wlanbt	0x180860
#define kern_off_kern_reboot 0x29A380 // mira
#define kern_off_set_gpu_freq 0x4DDDC0
#define kern_off_set_pstate 0x4D6FC0
#define kern_off_update_vddnp 0x4DE360
#define kern_off_set_cu_power_gate 0x4DE770
#define kern_off_pstate_before_shutdown 0x29A970
#endif
