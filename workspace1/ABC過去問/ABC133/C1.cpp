int count = 0;

    for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (i == j) {
				continue;
			}
			double num = 0;
			for (int k = 0; k < d; k++) {
				num += pow(data[i][k] - data[j][k], 2);
			}
			num = sqrt(num);
			if (floor(num) == num) {
				count++;
			}
		}
    }

    cout << count << endl;