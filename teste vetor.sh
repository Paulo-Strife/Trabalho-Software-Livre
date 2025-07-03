N=$((RANDOM % 16 + 5))

echo "$N" > input_vetor.txt

for ((i=0; i<N; i++)); do
    echo $((RANDOM % 100)) >> input_vetor.txt
done

echo "🧪 Vetor aleatório de tamanho $N gerado para teste."