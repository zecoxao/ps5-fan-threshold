#ifndef __FW_DEFINES_H__
#define __FW_DEFINES_H__

							// order: (to avoid kernel panic by reading not allocated memory)
#define	KERN_405_XFAST_SYSCALL		0x30EB30	// #4
#define	KERN_455_XFAST_SYSCALL		0x3095D0	// #2
#define	KERN_474_XFAST_SYSCALL		0x30B7D0	// #3
#define	KERN_501_XFAST_SYSCALL		0x1C0		// #1
#define	KERN_505_XFAST_SYSCALL		0x1C0		// #1

#define KERN_405_PRISON_0		0xF26010
#define KERN_455_PRISON_0		0x10399B0
#define KERN_474_PRISON_0		0x1042AB0
#define KERN_501_PRISON_0		0x10986A0
#define KERN_505_PRISON_0		0x10986A0

#define KERN_405_ROOTVNODE		0x206D250
#define KERN_455_ROOTVNODE		0x21AFA30
#define KERN_474_ROOTVNODE		0x21B89E0
#define KERN_501_ROOTVNODE		0x22C19F0
#define KERN_505_ROOTVNODE		0x22C1A70

#define KERN_405_PRINTF			0x347580
#define KERN_455_PRINTF			0x17F30
#define KERN_474_PRINTF			0x17F30
#define KERN_501_PRINTF			0x435C70
#define KERN_505_PRINTF			0x436040

#define KERN_405_COPYIN			0x286DF0
#define KERN_455_COPYIN			0x14A890
#define KERN_474_COPYIN			0x149F20
#define KERN_500_COPYIN			0x1EA600
#define KERN_505_COPYIN			0x1EA710

#define KERN_405_COPYOUT		0x286D70
#define KERN_455_COPYOUT		0x14A7B0
#define KERN_474_COPYOUT		0x149E40
#define KERN_501_COPYOUT		0x1EA520
#define KERN_505_COPYOUT		0x1EA630

#define KERN_405_MEMSET_ALIGNED		0x1ECB10
#define KERN_455_MEMSET_ALIGNED		0x302BD0
#define KERN_474_MEMSET_ALIGNED		0x304DD0
#define KERN_501_MEMSET_ALIGNED		0x3201F0
#define KERN_505_MEMSET_ALIGNED		0x3205C0

#define KERN_405_BZERO_ALIGNED		0x286C30
#define KERN_455_BZERO_ALIGNED		0x14A570
#define KERN_474_BZERO_ALIGNED		0x149C00
#define KERN_501_BZERO_ALIGNED		0x1EA360
#define KERN_505_BZERO_ALIGNED		0x1EA470


#endif
