CC=gcc
CFLAGS=-fno-stack-protector -z execstack -no-pie

all: week1 week1_real

week1: FLAG_VALUE = "\"flag-{This-was-just-to-get-startedlol}\""
week1: week1.c
	$(CC) $(CFLAGS) -DFLAG_VALUE=$(FLAG_VALUE) week1.c -o week1

week1_real: FLAG_VALUE = "\"flag-{Welcome-to-the-weekday-warriors}\""
week1_real: week1.c
	$(CC) $(CFLAGS) -DFLAG_VALUE=$(FLAG_VALUE) week1.c -o week1_real

clean:
	rm -f week1 week1_real
