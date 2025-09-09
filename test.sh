#!/bin/bash
echo -e "PUSH SWAP -- BENCHMARK\n"

echo "Input 0 1 2 - all combinations"
ARG="0 1"; OUTPUT=$(./push_swap $ARG | ./checker $ARG); if [ "$OUTPUT" = OK ]; then printf "\e[32m[OK]\e[0m "; else printf "\e[31m[KO]\e[0m "; fi
ARG="1 0"; OUTPUT=$(./push_swap $ARG | ./checker $ARG); if [ "$OUTPUT" = OK ]; then printf "\e[32m[OK]\e[0m "; else printf "\e[31m[KO]\e[0m "; fi
ARG="0 1 2"; OUTPUT=$(./push_swap $ARG | ./checker $ARG); if [ "$OUTPUT" = OK ]; then printf "\e[32m[OK]\e[0m "; else printf "\e[31m[KO]\e[0m "; fi
ARG="0 2 1"; OUTPUT=$(./push_swap $ARG | ./checker $ARG); if [ "$OUTPUT" = OK ]; then printf "\e[32m[OK]\e[0m "; else printf "\e[31m[KO]\e[0m "; fi
ARG="1 0 2"; OUTPUT=$(./push_swap $ARG | ./checker $ARG); if [ "$OUTPUT" = OK ]; then printf "\e[32m[OK]\e[0m "; else printf "\e[31m[KO]\e[0m "; fi
ARG="1 2 0"; OUTPUT=$(./push_swap $ARG | ./checker $ARG); if [ "$OUTPUT" = OK ]; then printf "\e[32m[OK]\e[0m "; else printf "\e[31m[KO]\e[0m "; fi
ARG="2 0 1"; OUTPUT=$(./push_swap $ARG | ./checker $ARG); if [ "$OUTPUT" = OK ]; then printf "\e[32m[OK]\e[0m "; else printf "\e[31m[KO]\e[0m "; fi
ARG="2 1 0"; OUTPUT=$(./push_swap $ARG | ./checker $ARG); if [ "$OUTPUT" = OK ]; then printf "\e[32m[OK]\e[0m "; else printf "\e[31m[KO]\e[0m "; fi
echo
echo
echo "Random input 3 digits - between -100 & 100"
for ((i=0; i<3; i++))
do
	for ((j=0; j<10; j++))
	do
		ARG=$(seq -100 100 | shuf | head -3 | tr '\n' ' ')
		OUTPUT=$(./push_swap $ARG | ./checker $ARG)
		if [ "$OUTPUT" = OK ]; then printf "\e[32m[OK]\e[0m "; else printf "\e[31m[KO]\e[0m "; fi
	done
	echo
done
echo
echo "Sorted 100 correctly"
for ((i=0; i<3; i++))
do
	for ((j=0; j<10; j++))
	do
		ARG=$(seq -100 100 | shuf | head -100 | tr '\n' ' ')
		OUTPUT=$(./push_swap $ARG | ./checker $ARG)
		if [ "$OUTPUT" = OK ]; then printf "\e[32m[OK]\e[0m "; else printf "\e[31m[KO]\e[0m "; fi
	done
	echo
done
echo
echo "Sorted 500 correctly"
for ((i=0; i<3; i++))
do
	for ((j=0; j<10; j++))
	do
		ARG=$(seq -500 500 | shuf | head -500 | tr '\n' ' ')
		OUTPUT=$(./push_swap $ARG | ./checker $ARG)
		if [ "$OUTPUT" = OK ]; then printf "\e[32m[OK]\e[0m "; else printf "\e[31m[KO]\e[0m "; fi
	done
	echo
done
echo
echo "Threshold for 100: 700 OP - 100% || 1100 - 80%"
for ((i=0; i<5; i++))
do
	for ((j=0; j<8; j++))
	do
		ARG=$(seq -100 100 | shuf | head -100 |tr '\n' ' ')
		OUTPUT=$(./push_swap $ARG | wc -l)
		if [ "$OUTPUT" -lt 700 ]; then printf "\e[32m[100%%]\e[0m "; elif [ "$OUTPUT" -lt 1100 ]; then printf "\e[33m[80%%]\e[0m "; else printf "\e[31m[KO]\e[0m "; fi
	done
	echo
done
echo
echo "Threshold for 500: 5500 OP - 100% || 8500 - 80%"
for ((i=0; i<5; i++))
do
	for ((j=0; j<8; j++))
	do
		ARG=$(seq -500 500 | shuf | head -500 |tr '\n' ' ')
		OUTPUT=$(./push_swap $ARG | wc -l)
		if [ "$OUTPUT" -lt 5500 ]; then printf "\e[32m[100%%]\e[0m "; elif [ "$OUTPUT" -lt 8500 ]; then printf "\e[33m[80%%]\e[0m "; else printf "\e[31m[KO]\e[0m "; fi
	done
	echo
done