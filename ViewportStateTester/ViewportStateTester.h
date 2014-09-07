#ifndef VIEWPORTSTATETESTER_H
#define VIEWPORTSTATETESTER_H

#include <QtWidgets/QMainWindow>
#include "ui_ViewportStateTester.h"
#include "ViewportState.h"

class ViewportStateTester : public QMainWindow
{
    Q_OBJECT

public:
    ViewportStateTester(QWidget *parent = 0);
    ~ViewportStateTester();

protected:
    virtual void mouseDoubleClickEvent( QMouseEvent* event ) override;
    virtual void mouseMoveEvent( QMouseEvent* event ) override;
    virtual void mousePressEvent( QMouseEvent* event ) override;
    virtual void mouseReleaseEvent( QMouseEvent* event ) override;
    virtual void wheelEvent( QWheelEvent* event ) override;

private:
    void SetViewportState( EViewportState eState );

    void SetObjectState();
    void SetBoneState();
    void SetPathState();

    void SetViewportOperator( EViewportOperator eOperator );

    void SetOperatorSelect();
    void SetOperatorMove();
    void SetOperatorRotate();
    void SetOperatorScale();
    void SetOperatorCamMove();
    void SetOperatorCamRotate();
    void SetOperatorCamZoom();

private:
    Ui::ViewportStateTesterClass ui;

    CViewportStateAbstract* m_pActiveState;

    CMouseData m_kMouseData;
    CObjectEditState m_kObjectEditState;
    CBoneEditState m_kBoneEditState;
    CPathEditState m_kPathEditState;
};

#endif // VIEWPORTSTATETESTER_H
