int oneWhile(int anAmount) {
    amount = anAmount;
    int coins = 0;
    while(amount > 0) {
        if(amount >= 25) {
            coins++;
            amount -= 25;
        } else if(amount >= 10) {
            coins++;
            amount -= 10;
        } else if(amount >= 5) {
            coins++;
            amount -= 5;
        } else {
            coins++;
            amount -= 1;
        }
    }
    return coins;
}

// least efficent but looks like 2nd most efficent