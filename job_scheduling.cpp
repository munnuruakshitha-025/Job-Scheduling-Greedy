#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Job {
    string id;
    int deadline;
    int profit;
};

bool compare(Job a, Job b) {
    return a.profit > b.profit;
}

int main() {
    int n;

    cout << "Enter number of jobs: ";
    cin >> n;

    vector<Job> jobs(n);

    cout << "Enter job ID, deadline and profit:\n";

    for (int i = 0; i < n; i++) {
        cin >> jobs[i].id
            >> jobs[i].deadline
            >> jobs[i].profit;
    }

    // Sort jobs in decreasing order of profit
    sort(jobs.begin(), jobs.end(), compare);

    cout << "\nJobs sorted by profit:\n";

    for (int i = 0; i < n; i++) {
        cout << jobs[i].id
             << " - Deadline: " << jobs[i].deadline
             << ", Profit: " << jobs[i].profit << endl;
    }

    // Find maximum deadline
    int maxDeadline = 0;

    for (int i = 0; i < n; i++) {
        if (jobs[i].deadline > maxDeadline) {
            maxDeadline = jobs[i].deadline;
        }
    }

    // Create time slots
    vector<string> slot(maxDeadline + 1, "");

    int totalProfit = 0;

    // Schedule jobs
    for (int i = 0; i < n; i++) {

        for (int j = jobs[i].deadline; j >= 1; j--) {

            if (slot[j] == "") {
                slot[j] = jobs[i].id;
                totalProfit += jobs[i].profit;
                break;
            }
        }
    }

    cout << "\nScheduled Jobs:\n";

    for (int i = 1; i <= maxDeadline; i++) {
        if (slot[i] != "") {
            cout << "Time Slot " << i
                 << " -> " << slot[i] << endl;
        }
    }

    cout << "\nMaximum Profit: "
         << totalProfit << endl;

    return 0;
}
