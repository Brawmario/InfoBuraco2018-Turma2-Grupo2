#pragma once
#include "dao/MySQLDAO.h"
#include <msclr\marshal_cppstd.h>

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RealizacaoOS
	/// </summary>
	public ref class TelaRealizacaoOS : public System::Windows::Forms::Form
	{
	public:
		TelaRealizacaoOS(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			//
			std::string sql, log;
			sql::Connection * connection;
			sql::PreparedStatement * preparedStatement;
			sql::ResultSet *resultSet;
			sql = "";
			System:String ^ Teste;
			try {
				MySQLDAO * MySQL = MySQLDAO::getInstance();
				connection = MySQL->getConnection();
				int vetor[5000];
				int i = 0;
				preparedStatement = connection->prepareStatement("SELECT * FROM db_b.OS;");
				resultSet = preparedStatement->executeQuery();
				while (resultSet->next()) {
					vetor[i] = resultSet->getInt(1);
					this->cb3_realizacaoos->Items->Add(String::Format("OS{0}", resultSet->getInt(1)));
					i++;
				}
			}
			catch (sql::SQLException e) {
				connection->close();
				log = e.what();
			}
			try {
				MySQLDAO * MySQL = MySQLDAO::getInstance();
				connection = MySQL->getConnection();
				int vetor[5000];
				int i = 0;
				preparedStatement = connection->prepareStatement("SELECT * FROM db_b.Equipe;");
				resultSet = preparedStatement->executeQuery();
				while (resultSet->next()) {
					sql = (resultSet->getString(1)).c_str();
					Teste = msclr::interop::marshal_as<String^>(sql);
					this->cb1_realizacaoos->Items->Add(Teste);
					i++;
				}
			}
			catch (sql::SQLException e) {
				connection->close();
				log = e.what();
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TelaRealizacaoOS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lb1_realizacaoos;
	private: System::Windows::Forms::Label^  lb2_realizacaoos;
	private: System::Windows::Forms::Label^  lb3_realizacaoos;
	private: System::Windows::Forms::Label^  lb4_realizacaoos;
	private: System::Windows::Forms::DateTimePicker^  dtp_realizacaoos;
	private: System::Windows::Forms::ComboBox^  cb1_realizacaoos;
	private: System::Windows::Forms::ComboBox^  cb2_realizacaoos;
	private: System::Windows::Forms::ComboBox^  cb3_realizacaoos;
	private: System::Windows::Forms::Button^  bt1_realizacaoos;
	private: System::Windows::Forms::Button^  bt2_realizacaoos;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lb1_realizacaoos = (gcnew System::Windows::Forms::Label());
			this->lb2_realizacaoos = (gcnew System::Windows::Forms::Label());
			this->lb3_realizacaoos = (gcnew System::Windows::Forms::Label());
			this->lb4_realizacaoos = (gcnew System::Windows::Forms::Label());
			this->dtp_realizacaoos = (gcnew System::Windows::Forms::DateTimePicker());
			this->cb1_realizacaoos = (gcnew System::Windows::Forms::ComboBox());
			this->cb2_realizacaoos = (gcnew System::Windows::Forms::ComboBox());
			this->cb3_realizacaoos = (gcnew System::Windows::Forms::ComboBox());
			this->bt1_realizacaoos = (gcnew System::Windows::Forms::Button());
			this->bt2_realizacaoos = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lb1_realizacaoos
			// 
			this->lb1_realizacaoos->AutoSize = true;
			this->lb1_realizacaoos->Location = System::Drawing::Point(12, 58);
			this->lb1_realizacaoos->Name = L"lb1_realizacaoos";
			this->lb1_realizacaoos->Size = System::Drawing::Size(33, 13);
			this->lb1_realizacaoos->TabIndex = 0;
			this->lb1_realizacaoos->Text = L"Data:";
			// 
			// lb2_realizacaoos
			// 
			this->lb2_realizacaoos->AutoSize = true;
			this->lb2_realizacaoos->Location = System::Drawing::Point(12, 90);
			this->lb2_realizacaoos->Name = L"lb2_realizacaoos";
			this->lb2_realizacaoos->Size = System::Drawing::Size(39, 13);
			this->lb2_realizacaoos->TabIndex = 1;
			this->lb2_realizacaoos->Text = L"Grupo:";
			// 
			// lb3_realizacaoos
			// 
			this->lb3_realizacaoos->AutoSize = true;
			this->lb3_realizacaoos->Location = System::Drawing::Point(12, 119);
			this->lb3_realizacaoos->Name = L"lb3_realizacaoos";
			this->lb3_realizacaoos->Size = System::Drawing::Size(25, 13);
			this->lb3_realizacaoos->TabIndex = 2;
			this->lb3_realizacaoos->Text = L"OS:";
			// 
			// lb4_realizacaoos
			// 
			this->lb4_realizacaoos->AutoSize = true;
			this->lb4_realizacaoos->Location = System::Drawing::Point(12, 153);
			this->lb4_realizacaoos->Name = L"lb4_realizacaoos";
			this->lb4_realizacaoos->Size = System::Drawing::Size(73, 13);
			this->lb4_realizacaoos->TabIndex = 3;
			this->lb4_realizacaoos->Text = L"Status da OS:";
			// 
			// dtp_realizacaoos
			// 
			this->dtp_realizacaoos->CustomFormat = L"\"dd/MM/yyyy\"";
			this->dtp_realizacaoos->Location = System::Drawing::Point(97, 51);
			this->dtp_realizacaoos->Name = L"dtp_realizacaoos";
			this->dtp_realizacaoos->Size = System::Drawing::Size(200, 20);
			this->dtp_realizacaoos->TabIndex = 4;
			// 
			// cb1_realizacaoos
			// 
			this->cb1_realizacaoos->FormattingEnabled = true;
			//this->cb1_realizacaoos->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Grupo 1", L"Grupo 2", L"Grupo 3" });
			this->cb1_realizacaoos->Location = System::Drawing::Point(97, 87);
			this->cb1_realizacaoos->Name = L"cb1_realizacaoos";
			this->cb1_realizacaoos->Size = System::Drawing::Size(121, 21);
			this->cb1_realizacaoos->TabIndex = 5;
			this->cb1_realizacaoos->SelectedIndexChanged += gcnew System::EventHandler(this, &TelaRealizacaoOS::comboBox1_SelectedIndexChanged);
			// 
			// cb2_realizacaoos
			// 
			this->cb2_realizacaoos->FormattingEnabled = true;
			this->cb2_realizacaoos->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Em Andamento", L"Concluída" });
			this->cb2_realizacaoos->Location = System::Drawing::Point(97, 150);
			this->cb2_realizacaoos->Name = L"cb2_realizacaoos";
			this->cb2_realizacaoos->Size = System::Drawing::Size(121, 21);
			this->cb2_realizacaoos->TabIndex = 6;
			this->cb2_realizacaoos->SelectedIndexChanged += gcnew System::EventHandler(this, &TelaRealizacaoOS::comboBox2_SelectedIndexChanged);
			// 
			// cb3_realizacaoos
			// 
			this->cb3_realizacaoos->FormattingEnabled = true;
			//this->cb3_realizacaoos->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"OS0", L"OS1", L"OS2", L"OS3", L"OS4" });
			this->cb3_realizacaoos->Location = System::Drawing::Point(97, 119);
			this->cb3_realizacaoos->Name = L"cb3_realizacaoos";
			this->cb3_realizacaoos->Size = System::Drawing::Size(121, 21);
			this->cb3_realizacaoos->TabIndex = 7;
			this->cb3_realizacaoos->SelectedIndexChanged += gcnew System::EventHandler(this, &TelaRealizacaoOS::comboBox3_SelectedIndexChanged);
			// 
			// bt1_realizacaoos
			// 
			this->bt1_realizacaoos->Location = System::Drawing::Point(38, 201);
			this->bt1_realizacaoos->Name = L"bt1_realizacaoos";
			this->bt1_realizacaoos->Size = System::Drawing::Size(75, 23);
			this->bt1_realizacaoos->TabIndex = 8;
			this->bt1_realizacaoos->Text = L"Voltar";
			this->bt1_realizacaoos->UseVisualStyleBackColor = true;
			this->bt1_realizacaoos->Click += gcnew System::EventHandler(this, &TelaRealizacaoOS::bt1_realizacaoos_Click);
			// 
			// bt2_realizacaoos
			// 
			this->bt2_realizacaoos->Location = System::Drawing::Point(199, 201);
			this->bt2_realizacaoos->Name = L"bt2_realizacaoos";
			this->bt2_realizacaoos->Size = System::Drawing::Size(75, 23);
			this->bt2_realizacaoos->TabIndex = 9;
			this->bt2_realizacaoos->Text = L"Registrar";
			this->bt2_realizacaoos->UseVisualStyleBackColor = true;
			this->bt2_realizacaoos->Click += gcnew System::EventHandler(this, &TelaRealizacaoOS::bt2_realizacaoos_Click);
			// 
			// TelaRealizacaoOS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(318, 261);
			this->Controls->Add(this->bt2_realizacaoos);
			this->Controls->Add(this->bt1_realizacaoos);
			this->Controls->Add(this->cb3_realizacaoos);
			this->Controls->Add(this->cb2_realizacaoos);
			this->Controls->Add(this->cb1_realizacaoos);
			this->Controls->Add(this->dtp_realizacaoos);
			this->Controls->Add(this->lb4_realizacaoos);
			this->Controls->Add(this->lb3_realizacaoos);
			this->Controls->Add(this->lb2_realizacaoos);
			this->Controls->Add(this->lb1_realizacaoos);
			this->Name = L"TelaRealizacaoOS";
			this->Text = L"RealizacaoOS";
			this->Load += gcnew System::EventHandler(this, &TelaRealizacaoOS::RealizacaoOS_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void RealizacaoOS_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bt1_realizacaoos_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void bt2_realizacaoos_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string sql, log;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement, *preparedStatement2, *preparedStatement3;
	sql::ResultSet *resultSet;
	sql = "";
	try {
		MySQLDAO * MySQL = MySQLDAO::getInstance();
		connection = MySQL->getConnection();
		int i = 0, j, aux, aux2;
		std::string sql;
		System::String ^ query;
		preparedStatement = connection->prepareStatement("SELECT * FROM db_b.OS;");
		resultSet = preparedStatement->executeQuery();
		while (resultSet->next()) {
			j = this->cb3_realizacaoos->SelectedIndex;
			if (j == i) {
				aux = resultSet->getInt(1);
				aux2 = this->cb2_realizacaoos->SelectedIndex;
				preparedStatement2 = connection->prepareStatement("UPDATE db_b.OS SET status = ? WHERE id_OS = ?;");
				if (aux2 == 0) {
					preparedStatement2->setString(1, "Em Andamento");

				}
				else {
					preparedStatement2->setString(1, "Concluida");
				}
				preparedStatement2->setInt(2, aux);
				preparedStatement2->execute();
				if (aux2 == 0) {
					preparedStatement2 = connection->prepareStatement("UPDATE db_b.OS SET prioridadeAtendimento = 'Alta' WHERE id_OS = ?;");
					preparedStatement2->setInt(1, aux);
					preparedStatement2->execute();
				}
				

			}
			i++;

		}
	}
	catch (sql::SQLException e) {
		connection->close();
		log = e.what();
	}
}
};
}
