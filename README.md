# ps4jb-payloads for ps4 phat+pro (aeolia/belize/baikal) 

fork from sleirsgoevy thank you ! i do need only Linux Payloads
https://github.com/sleirsgoevy/ps4jb-payloads


linux for Phat Model
linux-pro for Pro Model

Supported versions are:
- FW 5.00 / 5.01 / 5.03 / 5.05
- FW 6.70 / 6.71 / 6.72
- FW 7.00 / 7.01 / 7.02
- FW 7.50 / 7.51 / 7.55
- FW 9.00
- FW 9.03 / 9.04
- FW 9.50 / 9.51 / 9.60
- FW 10.00 / 10.01
- FW 10.50 / 10.70 / 10.71
- FW 11.00

Special Thanks For Help With Offsets:
- [crashniels](https://github.com/crashniels/ps4-linuxpayloads)
- [EinTim23](https://github.com/EinTim23/PS4-Linux-Loader)
- [BestPig](https://github.com/BestPig/)
- [Nazky](https://github.com/Nazky/PS4Linux-Payloads)

Values from running fifa23. 
you can change it and test others but check the klog he gives you an error when he doesnt accept. 

linux-pro
//PRO
kern.set_gpu_freq(0, 800);

kern.set_gpu_freq(1, 853);

kern.set_gpu_freq(2, 711);

kern.set_gpu_freq(3, 800);

kern.set_gpu_freq(4, 911);

kern.set_gpu_freq(5, 800);

kern.set_gpu_freq(6, 984);

kern.set_gpu_freq(7, 673);

kern.update_vddnp(0x24);

kern.set_cu_power_gate(0x24);

linux

//FAT&SLIM

kern.set_gpu_freq(0, 800);

kern.set_gpu_freq(1, 673);

kern.set_gpu_freq(2, 610);

kern.set_gpu_freq(3, 800);

kern.set_gpu_freq(4, 800);

kern.set_gpu_freq(5, 711);

kern.set_gpu_freq(6, 711);

kern.set_gpu_freq(7, 673);

kern.update_vddnp(0x12);

kern.set_cu_power_gate(0x12);


i hope the ps4 have an reboot counter and sistro add a feature to read them out :-P..... need a break..

credits: :D
thanks to marcan, valetin, eeply, rancido ... and all PS4 Devs . 
