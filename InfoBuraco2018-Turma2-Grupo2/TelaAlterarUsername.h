#pragma once

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaAlterarUsername
	/// </summary>
	public ref class TelaAlterarUsername : public System::Windows::Forms::Form
	{
	public:
		TelaAlterarUsername(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TelaAlterarUsername()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  tb_novoUsername;
	private: System::Windows::Forms::Button^  bt_voltar;
	private: System::Windows::Forms::Button^  bt_finalizar;
	protected:


	private: System::Windows::Forms::Label^  lb_novoUsername;
	private: System::Windows::Forms::Label^  lb_alterarUsername;


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
			this->tb_novoUsername = (gcnew System::Windows::Forms::TextBox());
			this->bt_voltar = (gcnew System::Windows::Forms::Button());
			this->bt_finalizar = (gcnew System::Windows::Forms::Button());
			this->lb_novoUsername = (gcnew System::Windows::Forms::Label());
			this->lb_alterarUsername = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tb_novoUsername
			// 
			this->tb_novoUsername->Location = System::Drawing::Point(133, 65);
			this->tb_novoUsername->Name = L"tb_novoUsername";
			this->tb_novoUsername->ShortcutsEnabled = false;
			this->tb_novoUsername->Size = System::Drawing::Size(104, 20);
			this->tb_novoUsername->TabIndex = 0;
			// 
			// bt_voltar
			// 
			this->bt_voltar->Location = System::Drawing::Point(41, 115);
			this->bt_voltar->Name = L"bt_voltar";
			this->bt_voltar->Size = System::Drawing::Size(86, 27);
			this->bt_voltar->TabIndex = 1;
			this->bt_voltar->Text = L"Voltar";
			this->bt_voltar->UseVisualStyleBackColor = true;
			this->bt_voltar->Click += gcnew System::EventHandler(this, &TelaAlterarUsername::bt_voltar_Sair);
			// 
			// bt_finalizar
			// 
			this->bt_finalizar->Location = System::Drawing::Point(155, 115);
			this->bt_finalizar->Name = L"bt_finalizar";
			this->bt_finalizar->Size = System::Drawing::Size(82, 27);
			this->bt_finalizar->TabIndex = 2;
			this->bt_finalizar->Text = L"Finalizar";
			this->bt_finalizar->UseVisualStyleBackColor = true;
			this->bt_finalizar->Click += gcnew System::EventHandler(this, &TelaAlterarUsername::bt_finalizar_Encerrar);
			// 
			// lb_novoUsername
			// 
			this->lb_novoUsername->AutoSize = true;
			this->lb_novoUsername->Location = System::Drawing::Point(42, 68);
			this->lb_novoUsername->Name = L"lb_novoUsername";
			this->lb_novoUsername->Size = System::Drawing::Size(85, 13);
			this->lb_novoUsername->TabIndex = 3;
			this->lb_novoUsername->Text = L"Novo username:";
			// 
			// lb_alterarUsername
			// 
			this->lb_alterarUsername->AutoSize = true;
			this->lb_alterarUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->lb_alterarUsername->Location = System::Drawing::Point(78, 20);
			this->lb_alterarUsername->Name = L"lb_alterarUsername";
			this->lb_alterarUsername->Size = System::Drawing::Size(119, 17);
			this->lb_alterarUsername->TabIndex = 4;
			this->lb_alterarUsername->Text = L"Alterar Username";
			// 
			// TelaAlterarUsername
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 186);
			this->Controls->Add(this->lb_alterarUsername);
			this->Controls->Add(this->lb_novoUsername);
			this->Controls->Add(this->bt_finalizar);
			this->Controls->Add(this->bt_voltar);
			this->Controls->Add(this->tb_novoUsername);
			this->Name = L"TelaAlterarUsername";
			this->Text = L"TelaAlterarUsername";
			this->Load += gcnew System::EventHandler(this, &TelaAlterarUsername::TelaAlterarUsername_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TelaAlterarUsername_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void bt_voltar_Sair(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void bt_finalizar_Encerrar(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
};
}
