#!/bin/bash
echo "For the real challenge, nc localhost 8080 " > running_instance.txt
rm /home/player1/*
cp running_instance.txt /home/player1/
cp week1 /home/player1/
cp week1.c /home/player1/
killall socat
socat TCP-LISTEN:8080,reuseaddr,fork EXEC:"./week1_real"
