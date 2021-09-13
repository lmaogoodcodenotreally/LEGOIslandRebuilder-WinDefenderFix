#ifndef CREBUILDERWINDOW_H
#define CREBUILDERWINDOW_H

#include <AFXWIN.H>

class CRebuilderWindow : public CFrameWnd
{
public:
  CRebuilderWindow();

  virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);

private:
  void LayoutObjects(UINT width, UINT height);

  enum {
    IDI_RUN
  };

  CFont m_fDialogFont;
  CFont m_fBoldDialogFont;
  UINT m_nFontHeight;

  CStatic m_cTopLevelTitle;
  CStatic m_cTopLevelSubtitle;

  CButton m_cRunBtn;

};

#endif // CREBUILDERWINDOW_H
