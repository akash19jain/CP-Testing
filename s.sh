for((i=1;;++i)); do
	echo $i
	./gen $i > inp
	./inc < inp > out1
	./brute < inp > out2
	diff -w out1 out2 || break
	# diff -w <(./a < inp) <(./brute < inp) ||break
done
