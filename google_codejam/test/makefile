# Makefile
# Dans le shell, avant de compiler faire:
# source /share/apps/profile.d/intel11.sh
# Mettre aussi cette ligne dans le script pour le qsub
# Comme on genere des gros fichiers, il ne faut pas tourner sur le /home
# mais plutot sur /mnt/lustre/$USER
.SUFFIXES: .c .o
CC=/usr/bin/gcc-4.6
NAME=test
FFLAGS= -g #-O3 -axSSE4.2,SSE4.1,SSSE3,SSE3,SSE2 -traceback #-C -heap-arrays 
LFLAGS= #-L$(MKLROOT)/lib/intel64 -lmkl_intel_lp64 -lmkl_intel_thread -lmkl_core -openmp -lpthread -lm
OBJS = \
test.o

.c.o:
	$(CC) $(FFLAGS) -c $*.c

PA.toc.2G :	$(OBJS)
	$(CC) $(OBJS) -o $(NAME) 

