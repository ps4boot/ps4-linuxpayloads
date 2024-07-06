
all: payload-505.bin payload-505-2gb.bin payload-505-3gb.bin payload-505-4gb.bin payload-672.bin payload-672-2gb.bin payload-672-3gb.bin payload-672-4gb.bin payload-702.bin payload-702-2gb.bin payload-702-3gb.bin payload-702-4gb.bin payload-750.bin payload-750-2gb.bin payload-750-3gb.bin payload-750-4gb.bin payload-900.bin payload-900-2gb.bin payload-900-3gb.bin payload-900-4gb.bin payload-903.bin payload-903-2gb.bin payload-903-3gb.bin payload-903-4gb.bin  payload-950.bin payload-950-2gb.bin payload-950-3gb.bin payload-950-4gb.bin payload-1000.bin payload-1000-2gb.bin payload-1000-3gb.bin payload-1000-4gb.bin payload-1050.bin payload-1050-2gb.bin payload-1050-3gb.bin payload-1050-4gb.bin payload-1100.bin payload-1100-2gb.bin payload-1100-3gb.bin payload-1100-4gb.bin


clean:
	rm -f payload-505.elf payload-505.bin payload-505-2gb.elf payload-505-2gb.bin payload-505-3gb.elf payload-505-3gb.bin payload-505-4gb.elf payload-505-4gb.bin payload-672.elf payload-672.bin payload-672-2gb.elf payload-672-2gb.bin payload-672-3gb.elf payload-672-3gb.bin payload-672-4gb.elf payload-672-4gb.bin payload-702.elf payload-702.bin payload-702-2gb.elf payload-702-2gb.bin payload-702-3gb.elf payload-702-3gb.bin payload-702-4gb.elf payload-702-4gb.bin payload-750.elf payload-750.bin payload-750-2gb.elf payload-750-2gb.bin payload-750-3gb.elf payload-750-3gb.bin payload-750-4gb.elf payload-750-4gb.bin payload-900.elf payload-900.bin payload-900-2gb.elf payload-900-2gb.bin payload-900-3gb.elf payload-900-3gb.bin payload-900-4gb.elf payload-900-4gb.bin payload-903.elf payload-903.bin payload-903-2gb.elf payload-903-2gb.bin payload-903-3gb.elf payload-903-3gb.bin payload-903-4gb.elf payload-903-4gb.bin payload-950.elf payload-950.bin payload-950-2gb.elf payload-950-2gb.bin payload-950-3gb.elf payload-950-3gb.bin payload-950-4gb.elf payload-950-4gb.bin payload-1000.elf payload-1000.bin payload-1000-2gb.elf payload-1000-2gb.bin payload-1000-3gb.elf payload-1000-3gb.bin payload-1000-4gb.elf payload-1000-4gb.bin payload-1050.elf payload-1050.bin payload-1050-2gb.elf payload-1050-2gb.bin payload-1050-3gb.elf payload-1050-3gb.bin payload-1050-4gb.elf payload-1050-4gb.bin payload-1100.elf payload-1100.bin payload-1100-2gb.elf payload-1100-2gb.bin payload-1100-3gb.elf payload-1100-3gb.bin payload-1100-4gb.elf payload-1100-4gb.bin;
	cd ps4-kexec-505; make clean
	cd ps4-kexec-672; make clean
	cd ps4-kexec-750; make clean
	cd ps4-kexec-702; make clean
	cd ps4-kexec-900; make clean
	cd ps4-kexec-903; make clean
	cd ps4-kexec-950; make clean
	cd ps4-kexec-1000; make clean
	cd ps4-kexec-1050; make clean
	cd ps4-kexec-1100; make clean
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


ps4-kexec-702/kexec.bin:
	cd ps4-kexec-702; make

payload-702.elf: ../lib/lib.a main.c ps4-kexec-702/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__7_02__ -DPS4_7_02 main.c -Wl,-gc-sections -o payload-702.elf -fPIE -ffreestanding

payload-702-2gb.elf: ../lib/lib.a main.c ps4-kexec-702/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__7_02__ -DPS4_7_02 -DVRAM_GB_DEFAULT=2 main.c -Wl,-gc-sections -o payload-702-2gb.elf -fPIE -ffreestanding

payload-702-3gb.elf: ../lib/lib.a main.c ps4-kexec-702/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__7_02__ -DPS4_7_02 -DVRAM_GB_DEFAULT=3 main.c -Wl,-gc-sections -o payload-702-3gb.elf -fPIE -ffreestanding

payload-702-4gb.elf: ../lib/lib.a main.c ps4-kexec-702/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__7_02__ -DPS4_7_02 -DVRAM_GB_DEFAULT=4 main.c -Wl,-gc-sections -o payload-702-4gb.elf -fPIE -ffreestanding


ps4-kexec-750/kexec.bin:
	cd ps4-kexec-750; make

payload-750.elf: ../lib/lib.a main.c ps4-kexec-750/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__7_50__ -DPS4_7_50 main.c -Wl,-gc-sections -o payload-750.elf -fPIE -ffreestanding

payload-750-2gb.elf: ../lib/lib.a main.c ps4-kexec-750/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__7_50__ -DPS4_7_50 -DVRAM_GB_DEFAULT=2 main.c -Wl,-gc-sections -o payload-750-2gb.elf -fPIE -ffreestanding

payload-750-3gb.elf: ../lib/lib.a main.c ps4-kexec-750/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__7_50__ -DPS4_7_50 -DVRAM_GB_DEFAULT=3 main.c -Wl,-gc-sections -o payload-750-3gb.elf -fPIE -ffreestanding

payload-750-4gb.elf: ../lib/lib.a main.c ps4-kexec-750/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__7_50__ -DPS4_7_50 -DVRAM_GB_DEFAULT=4 main.c -Wl,-gc-sections -o payload-750-4gb.elf -fPIE -ffreestanding


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

ps4-kexec-903/kexec.bin:
	cd ps4-kexec-903; make

payload-903.elf: ../lib/lib.a main.c ps4-kexec-903/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__9_03__ -DPS4_9_03 main.c -Wl,-gc-sections -o payload-903.elf -fPIE -ffreestanding

payload-903-2gb.elf: ../lib/lib.a main.c ps4-kexec-903/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__9_03__ -DPS4_9_03 -DVRAM_GB_DEFAULT=2 main.c -Wl,-gc-sections -o payload-903-2gb.elf -fPIE -ffreestanding

payload-903-3gb.elf: ../lib/lib.a main.c ps4-kexec-903/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__9_03__ -DPS4_9_03 -DVRAM_GB_DEFAULT=3 main.c -Wl,-gc-sections -o payload-903-3gb.elf -fPIE -ffreestanding

payload-903-4gb.elf: ../lib/lib.a main.c ps4-kexec-903/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__9_03__ -DPS4_9_03 -DVRAM_GB_DEFAULT=4 main.c -Wl,-gc-sections -o payload-903-4gb.elf -fPIE -ffreestanding


ps4-kexec-950/kexec.bin:
	cd ps4-kexec-950; make

payload-950.elf: ../lib/lib.a main.c ps4-kexec-950/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__9_50__ -DPS4_9_50 main.c -Wl,-gc-sections -o payload-950.elf -fPIE -ffreestanding

payload-950-2gb.elf: ../lib/lib.a main.c ps4-kexec-950/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__9_50__ -DPS4_9_50 -DVRAM_GB_DEFAULT=2 main.c -Wl,-gc-sections -o payload-950-2gb.elf -fPIE -ffreestanding

payload-950-3gb.elf: ../lib/lib.a main.c ps4-kexec-950/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__9_50__ -DPS4_9_50 -DVRAM_GB_DEFAULT=3 main.c -Wl,-gc-sections -o payload-950-3gb.elf -fPIE -ffreestanding

payload-950-4gb.elf: ../lib/lib.a main.c ps4-kexec-950/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__9_50__ -DPS4_9_50 -DVRAM_GB_DEFAULT=4 main.c -Wl,-gc-sections -o payload-950-4gb.elf -fPIE -ffreestanding


ps4-kexec-1000/kexec.bin:
	cd ps4-kexec-1000; make

payload-1000.elf: ../lib/lib.a main.c ps4-kexec-1000/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__10_00__ -DPS4_10_00 main.c -Wl,-gc-sections -o payload-1000.elf -fPIE -ffreestanding

payload-1000-2gb.elf: ../lib/lib.a main.c ps4-kexec-1000/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__10_00__ -DPS4_10_00 -DVRAM_GB_DEFAULT=2 main.c -Wl,-gc-sections -o payload-1000-2gb.elf -fPIE -ffreestanding

payload-1000-3gb.elf: ../lib/lib.a main.c ps4-kexec-1000/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__10_00__ -DPS4_10_00 -DVRAM_GB_DEFAULT=3 main.c -Wl,-gc-sections -o payload-1000-3gb.elf -fPIE -ffreestanding

payload-1000-4gb.elf: ../lib/lib.a main.c ps4-kexec-1000/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__10_00__ -DPS4_10_00 -DVRAM_GB_DEFAULT=4 main.c -Wl,-gc-sections -o payload-1000-4gb.elf -fPIE -ffreestanding


ps4-kexec-1050/kexec.bin:
	cd ps4-kexec-1050; make

payload-1050.elf: ../lib/lib.a main.c ps4-kexec-1050/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__10_50__ -DPS4_10_50 main.c -Wl,-gc-sections -o payload-1050.elf -fPIE -ffreestanding

payload-1050-2gb.elf: ../lib/lib.a main.c ps4-kexec-1050/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__10_50__ -DPS4_10_50 -DVRAM_GB_DEFAULT=2 main.c -Wl,-gc-sections -o payload-1050-2gb.elf -fPIE -ffreestanding

payload-1050-3gb.elf: ../lib/lib.a main.c ps4-kexec-1050/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__10_50__ -DPS4_10_50 -DVRAM_GB_DEFAULT=3 main.c -Wl,-gc-sections -o payload-1050-3gb.elf -fPIE -ffreestanding

payload-1050-4gb.elf: ../lib/lib.a main.c ps4-kexec-1050/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__10_50__ -DPS4_10_50 -DVRAM_GB_DEFAULT=4 main.c -Wl,-gc-sections -o payload-1050-4gb.elf -fPIE -ffreestanding


ps4-kexec-1100/kexec.bin:
	cd ps4-kexec-1100; make

payload-1100.elf: ../lib/lib.a main.c ps4-kexec-1100/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__11_00__ -DPS4_11_00 main.c -Wl,-gc-sections -o payload-1100.elf -fPIE -ffreestanding

payload-1100-2gb.elf: ../lib/lib.a main.c ps4-kexec-1100/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__11_00__ -DPS4_11_00 -DVRAM_GB_DEFAULT=2 main.c -Wl,-gc-sections -o payload-1100-2gb.elf -fPIE -ffreestanding

payload-1100-3gb.elf: ../lib/lib.a main.c ps4-kexec-1100/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__11_00__ -DPS4_11_00 -DVRAM_GB_DEFAULT=3 main.c -Wl,-gc-sections -o payload-1100-3gb.elf -fPIE -ffreestanding

payload-1100-4gb.elf: ../lib/lib.a main.c ps4-kexec-1100/kexec.bin
	gcc -isystem ../freebsd-headers -nostdinc -nostdlib -fno-stack-protector -static ../lib/lib.a -D__11_00__ -DPS4_11_00 -DVRAM_GB_DEFAULT=4 main.c -Wl,-gc-sections -o payload-1100-4gb.elf -fPIE -ffreestanding

%.bin: %.elf
	objcopy $< --only-section .text --only-section .data --only-section .bss --only-section .rodata -O binary $@
	file $@ | fgrep -q '$@: DOS executable (COM)'

ps4-kexec-%/kexec.bin:
	cd ps4-kexec-$*; make
