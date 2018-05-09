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
	private: System::Windows::Forms::Label^  lb_alterarSenha;
	private: System::Windows::Forms::RichTextBox^  rtb_erro;
	private: System::Windows::Forms::Label^  lb_telaDeErro;








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
			this->lb_alterarSenha = (gcnew System::Windows::Forms::Label());
			this->rtb_erro = (gcnew System::Windows::Forms::RichTextBox());
			this->lb_telaDeErro = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tb_senhaAtual
			// 
			this->tb_senhaAtual->Location = System::Drawing::Point(138, 54);
			this->tb_senhaAtual->Name = L"tb_senhaAtual";
			this->tb_senhaAtual->Size = System::Drawing::Size(106, 20);
			this->tb_senhaAtual->TabIndex = 0;
			this->tb_senhaAtual->UseSystemPasswordChar = true;
			// 
			// tb_novaSenha
			// 
			this->tb_novaSenha->Location = System::Drawing::Point(138, 80);
			this->tb_novaSenha->Name = L"tb_novaSenha";
			this->tb_novaSenha->Size = System::Drawing::Size(106, 20);
			this->tb_novaSenha->TabIndex = 1;
			this->tb_novaSenha->UseSystemPasswordChar = true;
			// 
			// tb_repetirNovaSenha
			// 
			this->tb_repetirNovaSenha->Location = System::Drawing::Point(138, 106);
			this->tb_repetirNovaSenha->Name = L"tb_repetirNovaSenha";
			this->tb_repetirNovaSenha->Size = System::Drawing::Size(106, 20);
			this->tb_repetirNovaSenha->TabIndex = 2;
			this->tb_repetirNovaSenha->UseSystemPasswordChar = true;
			// 
			// lb_senhaAtual
			// 
			this->lb_senhaAtual->AutoSize = true;
			this->lb_senhaAtual->Location = System::Drawing::Point(64, 57);
			this->lb_senhaAtual->Name = L"lb_senhaAtual";
			this->lb_senhaAtual->Size = System::Drawing::Size(68, 13);
			this->lb_senhaAtual->TabIndex = 3;
			this->lb_senhaAtual->Text = L"Senha Atual:";
			// 
			// lb_novaSenha
			// 
			this->lb_novaSenha->AutoSize = true;
			this->lb_novaSenha->Location = System::Drawing::Point(62, 83);
			this->lb_novaSenha->Name = L"lb_novaSenha";
			this->lb_novaSenha->Size = System::Drawing::Size(70, 13);
			this->lb_novaSenha->TabIndex = 4;
			this->lb_novaSenha->Text = L"Nova Senha:";
			this->lb_novaSenha->Click += gcnew System::EventHandler(this, &TelaAlterarSenha::lb_novaSenha_Click);
			// 
			// lb_repetirNovaSenha
			// 
			this->lb_repetirNovaSenha->AutoSize = true;
			this->lb_repetirNovaSenha->Location = System::Drawing::Point(25, 109);
			this->lb_repetirNovaSenha->Name = L"lb_repetirNovaSenha";
			this->lb_repetirNovaSenha->Size = System::Drawing::Size(107, 13);
			this->lb_repetirNovaSenha->TabIndex = 5;
			this->lb_repetirNovaSenha->Text = L"Repetir Nova Senha:";
			// 
			// bt_voltar
			// 
			this->bt_voltar->Location = System::Drawing::Point(38, 248);
			this->bt_voltar->Name = L"bt_voltar";
			this->bt_voltar->Size = System::Drawing::Size(81, 26);
			this->bt_voltar->TabIndex = 6;
			this->bt_voltar->Text = L"Voltar";
			this->bt_voltar->UseVisualStyleBackColor = true;
			this->bt_voltar->Click += gcnew System::EventHandler(this, &TelaAlterarSenha::bt_voltar_Sair);
			// 
			// bt_finalizar
			// 
			this->bt_finalizar->Location = System::Drawing::Point(163, 248);
			this->bt_finalizar->Name = L"bt_finalizar";
			this->bt_finalizar->Size = System::Drawing::Size(81, 26);
			this->bt_finalizar->TabIndex = 7;
			this->bt_finalizar->Text = L"Finalizar";
			this->bt_finalizar->UseVisualStyleBackColor = true;
			this->bt_finalizar->Click += gcnew System::EventHandler(this, &TelaAlterarSenha::bt_finalizar_Encerrar);
			// 
			// lb_alterarSenha
			// 
			this->lb_alterarSenha->AutoSize = true;
			this->lb_alterarSenha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->lb_alterarSenha->Location = System::Drawing::Point(92, 19);
			this->lb_alterarSenha->Name = L"lb_alterarSenha";
			this->lb_alterarSenha->Size = System::Drawing::Size(95, 17);
			this->lb_alterarSenha->TabIndex = 8;
			this->lb_alterarSenha->Text = L"Alterar Senha";
			// 
			// rtb_erro
			// 
			this->rtb_erro->Location = System::Drawing::Point(47, 159);
			this->rtb_erro->Name = L"rtb_erro";
			this->rtb_erro->ReadOnly = true;
			this->rtb_erro->Size = System::Drawing::Size(197, 72);
			this->rtb_erro->TabIndex = 9;
			this->rtb_erro->Text = L"";
			// 
			// lb_telaDeErro
			// 
			this->lb_telaDeErro->AutoSize = true;
			this->lb_telaDeErro->Location = System::Drawing::Point(52, 140);
			this->lb_telaDeErro->Name = L"lb_telaDeErro";
			this->lb_telaDeErro->Size = System::Drawing::Size(68, 13);
			this->lb_telaDeErro->TabIndex = 10;
			this->lb_telaDeErro->Text = L"Tela de Erro:";
			// 
			// TelaAlterarSenha
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 328);
			this->Controls->Add(this->lb_telaDeErro);
			this->Controls->Add(this->rtb_erro);
			this->Controls->Add(this->lb_alterarSenha);
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
			this->Load += gcnew System::EventHandler(this, &TelaAlterarSenha::TelaAlterarSenha_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void lb_novaSenha_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void TelaAlterarSenha_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bt_voltar_Sair(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
	private: System::Void bt_finalizar_Encerrar(System::Object^  sender, System::EventArgs^  e) {
		if (this->tb_novaSenha->Text == this->tb_repetirNovaSenha->Text) {
			Close();
		}
		else {
			this->rtb_erro->Text = L"Erro:Senha nos campos 'Nova Senha' e 'Repetir Nova Senha' diferentes uns dos outros. ";
		}
}
};
}
