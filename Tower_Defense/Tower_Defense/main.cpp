// � ��������� consts.h ����� ��������� ��������� ���� � �������
// � ����� field.cpp � ������� makeRoad() ����� ������� ����� ������ �� �����������

void mainGame(int &result, int &level);
void result(int result, int level, bool &playAgain);

int main()
{
	// ���� ������� ��������� ���� 0 - ������ ����, 1 - ������ ����, 2 - ��������
	int res{ 0 };

	// �� ����� ����� ����������� ����?
	int level{ 0 };

	// ������ �����?
	bool playAgain{ 1 };

	while (playAgain) {
		// ���������� ��� ���������
		res = 0; level = 0;

		// �������� ����
		mainGame(res, level);

		// ���������
		result(res, level, playAgain);
	}

	return 0;
}