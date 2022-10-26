
all: payload-505.bin payload-505-2gb.bin payload-505-3gb.bin payload-505-4gb.bin payload-672.bin payload-672-2gb.bin payload-672-3gb.bin payload-672-4gb.bin payload-900.bin payload-900-2gb.bin payload-900-3gb.bin payload-900-4gb.bin

clean:
	rm -f payload-505.elf payload-505.bin payload-505-2gb.elf payload-505-2gb.bin payload-505-3gb.elf payload-505-3gb.bin payload-505-4gb.elf payload-505-4gb.bin payload-672.elf payload-672.bin payload-672-2gb.elf payload-672-2gb.bin payload-672-3gb.elf payload-672-3gb.bin payload-672-4gb.elf payload-672-4gb.bin payload-900.elf payload-900.bin payload-900-2gb.elf payload-900-2gb.bin payload-900-3gb.elf payload-900-3gb.bin payload-900-4gb.elf payload-900-4gb.bin; 
	cd ps4-kexec-505; make clean
	cd ps4-kexec-672; make clean
	cd ps4-kexec-900; make clean
	cd ../lib/; make clean
    
../lib/lib.a:
	cd ../lib; make

ps4-kexec-505/kexec.bin:
	cd ps4-kexec-505; make

payload-505.elf: ../lib/lib.a main.c ps4-kexec-505/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__5_05__ -DPS4_5_05 main.c -Wl,-gc-sections -o payload-505.elf -fPIE -ffreestanding

payload-505-2gb.elf: ../lib/lib.a main.c ps4-kexec-505/kexec.bin
	 gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__5_05__ -DPS4_5_05 -DVRAM_GB_DEFAULT=2 main.c -Wl,-gc-sections -o payload-505-2gb.elf -fPIE -ffreestanding

payload-505-3gb.elf: ../lib/lib.a main.c ps4-kexec-505/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__5_05__ -DPS4_5_05 -DVRAM_GB_DEFAULT=3 main.c -Wl,-gc-sections -o payload-505-3gb.elf -fPIE -ffreestanding

payload-505-4gb.elf: ../lib/lib.a main.c ps4-kexec-505/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__5_05__ -DPS4_5_05 -DVRAM_GB_DEFAULT=4 main.c -Wl,-gc-sections -o payload-505-4gb.elf -fPIE -ffreestanding


ps4-kexec-672/kexec.bin:
	cd ps4-kexec-672; make

payload-672.elf: ../lib/lib.a main.c ps4-kexec-672/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__6_72__ -DPS4_6_72 main.c -Wl,-gc-sections -o payload-672.elf -fPIE -ffreestanding

payload-672-2gb.elf: ../lib/lib.a main.c ps4-kexec-672/kexec.bin
	 gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__6_72__ -DPS4_6_72 -DVRAM_GB_DEFAULT=2 main.c -Wl,-gc-sections -o payload-672-2gb.elf -fPIE -ffreestanding

payload-672-3gb.elf: ../lib/lib.a main.c ps4-kexec-672/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__6_72__ -DPS4_6_72 -DVRAM_GB_DEFAULT=3 main.c -Wl,-gc-sections -o payload-672-3gb.elf -fPIE -ffreestanding

payload-672-4gb.elf: ../lib/lib.a main.c ps4-kexec-672/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__6_72__ -DPS4_6_72 -DVRAM_GB_DEFAULT=4 main.c -Wl,-gc-sections -o payload-672-4gb.elf -fPIE -ffreestanding


ps4-kexec-900/kexec.bin:
	cd ps4-kexec-900; make

payload-900.elf: ../lib/lib.a main.c ps4-kexec-900/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__9_00__ -DPS4_9_00 main.c -Wl,-gc-sections -o payload-900.elf -fPIE -ffreestanding

payload-900-2gb.elf: ../lib/lib.a main.c ps4-kexec-900/kexec.bin
	 gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__9_00__ -DPS4_9_00 -DVRAM_GB_DEFAULT=2 main.c -Wl,-gc-sections -o payload-900-2gb.elf -fPIE -ffreestanding

payload-900-3gb.elf: ../lib/lib.a main.c ps4-kexec-900/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__9_00__ -DPS4_9_00 -DVRAM_GB_DEFAULT=3 main.c -Wl,-gc-sections -o payload-900-3gb.elf -fPIE -ffreestanding

payload-900-4gb.elf: ../lib/lib.a main.c ps4-kexec-900/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__9_00__ -DPS4_9_00 -DVRAM_GB_DEFAULT=4 main.c -Wl,-gc-sections -o payload-900-4gb.elf -fPIE -ffreestanding


%.bin: %.elf
	objcopy $< --only-section .text --only-section .data --only-section .bss --only-section .rodata -O binary $@
	file $@ | fgrep -q '$@: DOS executable (COM)'

ps4-kexec-%/kexec.bin:
	cd ps4-kexec-$*; make
