#pragma once

namespace InfoBuraco2018Turma2Grupo2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaAlterarSenha
	/// </summary>
	public ref class TelaAlterarSenha : public System::Windows::Forms::Form
	{
	public:
		TelaAlterarSenha(void)
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
		~TelaAlterarSenha()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  tb_senhaAtual;
	private: System::Windows::Forms::TextBox^  tb_novaSenha;
	private: System::Windows::Forms::TextBox^  tb_repetirNovaSenha;
	protected:

	protected:


	private: System::Windows::Forms::Label^  lb_senhaAtual;
	private: System::Windows::Forms::Label^  lb_novaSenha;
	private: System::Windows::Forms::Label^  lb_repetirNovaSenha;
	private: System::Windows::Forms::Button^  bt_voltar;
	private: System::Windows::Forms::Button^  bt_finalizar;





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
			this->tb_senhaAtual = (gcnew System::Windows::Forms::TextBox());
			this->tb_novaSenha = (gcnew System::Windows::Forms::TextBox());
			this->tb_repetirNovaSenha = (gcnew System::Windows::Forms::TextBox());
			this->lb_senhaAtual = (gcnew System::Windows::Forms::Label());
			this->lb_novaSenha = (gcnew System::Windows::Forms::Label());
			this->lb_repetirNovaSenha = (gcnew System::Windows::Forms::Label());
			this->bt_voltar = (gcnew System::Windows::Forms::Button());
			this->bt_finalizar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tb_senhaAtual
			// 
			this->tb_senhaAtual->Location = System::Drawing::Point(138, 49);
			this->tb_senhaAtual->Name = L"tb_senhaAtual";
			this->tb_senhaAtual->Size = System::Drawing::Size(106, 20);
			this->tb_senhaAtual->TabIndex = 0;
			// 
			// tb_novaSenha
			// 
			this->tb_novaSenha->Location = System::Drawing::Point(138, 75);
			this->tb_novaSenha->Name = L"tb_novaSenha";
			this->tb_novaSenha->Size = System::Drawing::Size(106, 20);
			this->tb_novaSenha->TabIndex = 1;
			// 
			// tb_repetirNovaSenha
			// 
			this->tb_repetirNovaSenha->Location = System::Drawing::Point(138, 101);
			this->tb_repetirNovaSenha->Name = L"tb_repetirNovaSenha";
			this->tb_repetirNovaSenha->Size = System::Drawing::Size(106, 20);
			this->tb_repetirNovaSenha->TabIndex = 2;
			// 
			// lb_senhaAtual
			// 
			this->lb_senhaAtual->AutoSize = true;
			this->lb_senhaAtual->Location = System::Drawing::Point(64, 52);
			this->lb_senhaAtual->Name = L"lb_senhaAtual";
			this->lb_senhaAtual->Size = System::Drawing::Size(68, 13);
			this->lb_senhaAtual->TabIndex = 3;
			this->lb_senhaAtual->Text = L"Senha Atual:";
			// 
			// lb_novaSenha
			// 
			this->lb_novaSenha->AutoSize = true;
			this->lb_novaSenha->Location = System::Drawing::Point(62, 78);
			this->lb_novaSenha->Name = L"lb_novaSenha";
			this->lb_novaSenha->Size = System::Drawing::Size(70, 13);
			this->lb_novaSenha->TabIndex = 4;
			this->lb_novaSenha->Text = L"Nova Senha:";
			this->lb_novaSenha->Click += gcnew System::EventHandler(this, &TelaAlterarSenha::lb_novaSenha_Click);
			// 
			// lb_repetirNovaSenha
			// 
			this->lb_repetirNovaSenha->AutoSize = true;
			this->lb_repetirNovaSenha->Location = System::Drawing::Point(25, 104);
			this->lb_repetirNovaSenha->Name = L"lb_repetirNovaSenha";
			this->lb_repetirNovaSenha->Size = System::Drawing::Size(107, 13);
			this->lb_repetirNovaSenha->TabIndex = 5;
			this->lb_repetirNovaSenha->Text = L"Repetir Nova Senha:";
			// 
			// bt_voltar
			// 
			this->bt_voltar->Location = System::Drawing::Point(38, 158);
			this->bt_voltar->Name = L"bt_voltar";
			this->bt_voltar->Size = System::Drawing::Size(81, 26);
			this->bt_voltar->TabIndex = 6;
			this->bt_voltar->Text = L"Voltar";
			this->bt_voltar->UseVisualStyleBackColor = true;
			// 
			// bt_finalizar
			// 
			this->bt_finalizar->Location = System::Drawing::Point(163, 158);
			this->bt_finalizar->Name = L"bt_finalizar";
			this->bt_finalizar->Size = System::Drawing::Size(81, 26);
			this->bt_finalizar->TabIndex = 7;
			this->bt_finalizar->Text = L"Finalizar";
			this->bt_finalizar->UseVisualStyleBackColor = true;
			// 
			// TelaAlterarSenha
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 227);
			this->Controls->Add(this->bt_finalizar);
			this->Controls->Add(this->bt_voltar);
			this->Controls->Add(this->lb_repetirNovaSenha);
			this->Controls->Add(this->lb_novaSenha);
			this->Controls->Add(this->lb_senhaAtual);
			this->Controls->Add(this->tb_repetirNovaSenha);
			this->Controls->Add(this->tb_novaSenha);
			this->Controls->Add(this->tb_senhaAtual);
			this->Name = L"TelaAlterarSenha";
			this->Text = L"TelaAlterarSenha";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void lb_novaSenha_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
