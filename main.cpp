void minCashFlowRec(int amount[])

{

    int mxCredit = getMax(amount), mxDebit = getMin(amount);

    if (amount[mxCredit] == 0 && amount[mxDebit] == 0)

        return;

    int min = minOf2(-amount[mxDebit], amount[mxCredit]);

    amount[mxCredit] -= min;

    amount[mxDebit] += min;

     cout << "Person " << mxDebit << " pays " << min

         << " to " << "Person " << mxCredit << endl;

    minCashFlowRec(amount);

}
