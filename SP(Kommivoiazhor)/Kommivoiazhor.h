#pragma once
#include<iostream>
#include<iomanip>
#include<vector>
#include<stack>


class Kommivoiazhors
{
public:
	Kommivoiazhors();
	Kommivoiazhors(int amount_punkts);
	void create_road_map(); //�������� ����� �������
	void fill_amountofiterations(); //���������� ����� amount_of_iterations
	void print_road_map(); //1.����� ����� ������� (�����������)
	void finding_minimums_by_STR(); //2.���������� ��������� �� �������
	void reduction_of_STR(); //3.�������� �����(��������� �������� �� ������� �������� ������, �� ����� �������������)
	void finding_minimums_by_STL(); //4.���������� �������� �� ��������
	void reduction_of_STL(); //5.�������� ��������
	void zero_cells(); //6.���������� ������ ������� ������
	void reduction_of_a_matrix(); //7.�������� �������
	void result(); //����� ������� �������� �����
	void print_min_ways(); //����� ������������ ��������
	void MAIN_finding_the_shortest_way(Kommivoiazhors* k); //���������� ����������� ���� ������� "������ � ������"
	~Kommivoiazhors();

protected:
	bool amount_punkts_yes_or_no = false; //���������� �� �� ������ ����� ���������� ������� ��� �������� ��� ��� (����� ��� �������� �����)
	const int max_amount = 15;
	int amount_vertex = 0;
	int way = 0;
	const int ch_di = 100; //'d'
	const int ch_di_ = 105; //'i'
	const int ch_dj__ = 106; //'j'
	int memory_i = 0; int memory_j = 0; //����������, ����� ������ �� ������������� ������ � ������� ��������, ����� �������� ������ "������ � ������"
	int circle_algotihm = 0; //������� ������ ������ ��� ��������, ����� ��������� memory_i � j
	int distance = 0; //�������� ����������
	int counter_for_summ = 0; //������� ��� summ
	std::vector<int> di, dj; //� ������(2. � 4.) � ����� �� ������� ����� �������� �������� �� ������ ������, � � ������ �� �������
	std::vector<int> vector_vertex; //������ ������(�������)
	std::vector<std::vector<int>> adj_matrix; //������ ��� �������� ����� �����
	std::vector<std::vector<int>> copy_adjmatrix; //����� ����� �����, ����������� ��� ������ ����������, ������-��� �������(�����) ����� ��������, ����� �������
	std::vector<std::vector<int>> memory_zero; //��� ���������� ������ ������� ������ � ��� ����������� ���������� �� � �������
	std::vector<std::vector<int>> vec_ways; //����������� � ���� ������ � ����������� �����
	std::stack<int> amount_of_iterations; //����� ����� ������� ��� ����������� ������ �������� �������� ������ "������ � ������"

};
