namespace FirstForm
{
    partial class First_From
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
            this.Exam_btn1 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // Exam_btn1
            // 
            this.Exam_btn1.Location = new System.Drawing.Point(188, 166);
            this.Exam_btn1.Name = "Exam_btn1";
            this.Exam_btn1.Size = new System.Drawing.Size(279, 119);
            this.Exam_btn1.TabIndex = 0;
            this.Exam_btn1.Text = "누르시오";
            this.Exam_btn1.UseVisualStyleBackColor = true;
            this.Exam_btn1.Click += new System.EventHandler(this.Exam_btn1_Click);
            // 
            // First_From
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.Exam_btn1);
            this.Name = "First_From";
            this.StartPosition = System.Windows.Forms.FormStartPosition.WindowsDefaultBounds;
            this.Text = "첫번째 연습";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.First_From_FormClosing);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button Exam_btn1;
    }
}

