int modulo(int anAmount) {
    change = anAmount
    int coins = change / 25;
    change = change % 25;

    coins += change / 10;
    change = change % 10;

    coins += change / 5;
    change = change % 5;

    coins += change / 1;
    change = change % 1;

    return coins;

}

// first more efficent