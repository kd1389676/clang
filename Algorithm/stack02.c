#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* �X�^�[�g�n�_�̍��W */
const int SX = 1;
const int SY = 1;
/* �S�[���n�_�̍��W */
const int GX = 8;
const int GY = 1;
/* ���H�f�[�^ */
int map[7][10] = {
{1,1,1,1,1,1,1,1,1,1},
{1,0,0,0,0,0,1,0,0,1},
{1,0,1,0,1,0,0,0,1,1},
{1,0,0,1,0,0,0,1,0,1},
{1,1,0,1,0,1,0,1,0,1},
{1,0,0,0,0,1,0,0,0,1},
{1,1,1,1,1,1,1,1,1,1},
};
#define STACKSIZE 46 //�X�^�b�N�T�C�Y �����ȏ�����ύX
int stack[STACKSIZE]; //�X�^�b�N�̈�p�z��
int sp = 0; //�X�^�b�N�|�C���^(�z��̓Y����)
/* �֐��v���g�^�C�v */
void DrawMaze(int x, int y);
int push(int d);
int pop(int* pd);
int susumu(int x, int y);
/* ���C���֐�(�G���g���|�C���g) */
main()
{
	// �����̏�Ԃ�\��
	system("cls"); // ��ʃN���A
	printf("�����̏�Ԃ�\��\n");
	DrawMaze(-1, -1); // ���H�\��(�T�����ł͖����̂ň����̓_�~�[(-1)��ݒ�)
	printf("�uEnter�v�L�[:�������s\n");
	getch(); // Enter�L�[���������܂ňꎞ��~
	susumu(SX, SY); /* �o�H�T���֐����R�[�� */
	// �Ō�̏�Ԃ�\��
	system("cls"); // ��ʃN���A
	printf("�Ō�̏�Ԃ�\��\n");
	DrawMaze(-1, -1); // ���H�\��(�T�����ł͖����̂ň����̓_�~�[(-1)��ݒ�)
}
/* ���H�`��֐� �����ȏ�����ύX(������ǉ�:�T�����̍��W�ʒu) */
void DrawMaze(int x, int y)
{
	int i, j;
	for (i = 0; i < 7; i++) { // �s�����̌J�Ԃ�
		for (j = 0; j < 10; j++) { // �񐔕��̌J�Ԃ�
			// ���H�`��
			if (i == y && j == x) {
				printf("�l"); //�T�����̈ʒu
			}
			else if (i == SY && j == SX) {
				printf("S"); // �X�^�[�g�n�_ ���S�p��S
			}
			else if (i == GY && j == GX) {
				printf("G"); // �S�[���n�_ ���S�p��G

			}
			else if (map[i][j] == 1) {
				printf("�l"); // ��:�����Ƃ��܂������Ȃ��̂Ŏl�ő�p
			}
			else if (map[i][j] == 2) {
				printf("�E"); // �ʂ����Ƃ���̖ڈ�
			}
			else {
				printf(" "); // �ʘH
			}
		}
		printf("\n");
	}
	return;
}
/* �X�^�b�N�Ƀf�[�^��ς�(�v�b�V������)�֐� */
int push(int d)
{
	if (sp == STACKSIZE) { return -1; } //�X�^�b�N����t�̂Ƃ�
	stack[sp] = d;
	sp++;
	return 0;
}
/* �X�^�b�N����f�[�^�����o��(�|�b�v����)�֐� */
int pop(int* pd)
{
	if (sp == 0) { return -1; } //�X�^�b�N����̂Ƃ�
	sp--;
	*pd = stack[sp];
	stack[sp] = 0; //�m�F���₷�����邽��
	return 0;
}
/* ����i�ފ֐� */
int susumu(int x, int y)
{
	int i;
	while (1) {
		// �T���r���̏󋵂�\��
		system("cls"); // ��ʃN���A
		printf("�T���r���̏󋵂�\�� �u�l�v���T�����̈ʒu\n");
		DrawMaze(x, y); // ���H�\��(�r���o��)
		printf("�uEnter�v�L�[:�������s\n");
		getch(); // Enter�L�[���������܂ňꎞ��~
		map[y][x] = 2; //�ʂ����Ƃ���̖ڈ�Ƃ���2��u�� �����ȏ�����ύX
		if (x == GX && y == GY) { return 0; } //�S�[��������
		/* �X�^�b�N�Ɍ��݂̍��W���i�[���� */
		push(x);
		push(y);
		/* �X�^�b�N�̏�Ԃ�\�� */
		//���s���ʂ����ɂ����Ȃ�̂ŏȗ����܂�
		/* �i�߂�������`�F�b�N���� */
		if (map[y - 1][x] == 0) { y -= 1; continue; } //��
		if (map[y + 1][x] == 0) { y += 1; continue; } //��
		if (map[y][x - 1] == 0) { x -= 1; continue; } //��
		if (map[y][x + 1] == 0) { x += 1; continue; } //�E
		/* �㉺���E�ǂ��ɂ������Ȃ������Ƃ� *
		/* �X�^�b�N������W�����o��(���݂̍��W) */
		pop(&y);
		pop(&x);

		/* �X�^�b�N������W�����o��(1�O�̍��W) */
		pop(&y);
		if (pop(&x) == -1) { return -1; } //�X�^�b�N����ɂȂ����Ƃ�
		//���Ȃ킿�A�o���ɓ��B�ł��Ȃ������Ƃ�
	}
}