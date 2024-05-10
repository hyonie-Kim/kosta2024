namespace Exam
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.txtAge = new System.Windows.Forms.TextBox();
            this.lblResult = new System.Windows.Forms.Label();
            this.btnResult = new System.Windows.Forms.Button();
            this.lblAge = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // txtAge
            // 
            this.txtAge.Location = new System.Drawing.Point(225, 103);
            this.txtAge.Name = "txtAge";
            this.txtAge.Size = new System.Drawing.Size(100, 21);
            this.txtAge.TabIndex = 0;
            // 
            // lblResult
            // 
            this.lblResult.AutoSize = true;
            this.lblResult.Font = new System.Drawing.Font("맑은 고딕", 20.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.lblResult.Location = new System.Drawing.Point(229, 190);
            this.lblResult.Name = "lblResult";
            this.lblResult.Size = new System.Drawing.Size(71, 37);
            this.lblResult.TabIndex = 1;
            this.lblResult.Text = "결과";
            this.lblResult.TextAlign = System.Drawing.ContentAlignment.TopCenter;
            // 
            // btnResult
            // 
            this.btnResult.Location = new System.Drawing.Point(225, 143);
            this.btnResult.Name = "btnResult";
            this.btnResult.Size = new System.Drawing.Size(75, 23);
            this.btnResult.TabIndex = 2;
            this.btnResult.Text = "버튼";
            this.btnResult.UseVisualStyleBackColor = true;
            // 
            // lblAge
            // 
            this.lblAge.AutoSize = true;
            this.lblAge.Location = new System.Drawing.Point(191, 108);
            this.lblAge.Name = "lblAge";
            this.lblAge.Size = new System.Drawing.Size(29, 12);
            this.lblAge.TabIndex = 3;
            this.lblAge.Text = "나이";
            this.lblAge.Click += new System.EventHandler(this.label1_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.lblAge);
            this.Controls.Add(this.btnResult);
            this.Controls.Add(this.lblResult);
            this.Controls.Add(this.txtAge);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox txtAge;
        private System.Windows.Forms.Label lblResult;
        private System.Windows.Forms.Button btnResult;
        private System.Windows.Forms.Label lblAge;
    }
}

