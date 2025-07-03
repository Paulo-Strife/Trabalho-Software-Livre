ROWS=$((RANDOM % 9 + 2))
COLS=$((RANDOM % 9 + 2))

echo "$ROWS $COLS" > input_matriz.txt

for ((i=0; i<ROWS; i++)); do
    for ((j=0; j<COLS; j++)); do
        printf "%d " $((RANDOM % 100))
    done
    echo "" >> input_matriz.txt
done

echo "🧪 Matriz aleatória ${ROWS}x${COLS} gerada para teste."