# basickernel
A template to make a .bin file that is able to be booted as a 'Operating System'. 

Steps:

Open a terminal in your directory containing all the files (linker, makefile, kernel.cpp etc.)

Run these following commands:
- `make kernel.o`
- `make loader.o`

You will then find kernel.o and loader.o in your directory, then run: `make kernel.bin`

You will find a .bin file in your directory. Run: `make install`, this will require administration/superuser privelages.

In the `/boot/` directory you will find `kernel.bin`

# How To Boot It Up (GRUB)

Run `sudo vim /boot/grub/grub.cfg` this will open the GRUB configuration file.

Scroll down until you see: `### END etc/grub.d/30_os-prober ###`

After that, type in the .cfg file:

`### BEGIN KERNEL ###` (you can replace the name 'kernel')
`### END KERNEL ###`

Put in the following in between:

menuentry 'OS-Name-Here' {
          multiboot /boot/kernel.bin
          boot
}

Save the .cfg file.

You can now restart your operating system and choose to boot the kernel you just made. Have fun!
