#include "ViewportStateTester.h"
#include <QMouseEvent>
#include <qDebug>

ViewportStateTester::ViewportStateTester(QWidget *parent)
: QMainWindow(parent)
, m_pActiveState( nullptr )
, m_kObjectEditState( m_kMouseData )
, m_kBoneEditState( m_kMouseData )
, m_kPathEditState( m_kMouseData )
{
    ui.setupUi(this);

    m_pActiveState = &m_kObjectEditState;

    connect( ui.qtObjectStateButton, &QRadioButton::clicked, this, &ViewportStateTester::SetObjectState );
    connect( ui.qtBoneStateButton, &QRadioButton::clicked, this, &ViewportStateTester::SetBoneState );
    connect( ui.qtPathStateButton, &QRadioButton::clicked, this, &ViewportStateTester::SetPathState );

    connect( ui.qtSelectButton, &QRadioButton::clicked, this, &ViewportStateTester::SetOperatorSelect );
    connect( ui.qtMoveButton, &QRadioButton::clicked, this, &ViewportStateTester::SetOperatorMove );
    connect( ui.qtRotateButton, &QRadioButton::clicked, this, &ViewportStateTester::SetOperatorRotate );
    connect( ui.qtScaleButton, &QRadioButton::clicked, this, &ViewportStateTester::SetOperatorScale );
    connect( ui.qtCamMoveButton, &QRadioButton::clicked, this, &ViewportStateTester::SetOperatorCamMove );
    connect( ui.qtCamRotateButton, &QRadioButton::clicked, this, &ViewportStateTester::SetOperatorCamRotate );
    connect( ui.qtCamZoomButton, &QRadioButton::clicked, this, &ViewportStateTester::SetOperatorCamZoom );

}

ViewportStateTester::~ViewportStateTester()
{

}

void ViewportStateTester::SetObjectState()
{
    SetViewportState( OBJECT_EDIT );
}

void ViewportStateTester::SetBoneState()
{
    SetViewportState( BONE_EDIT );
}

void ViewportStateTester::SetPathState()
{
    SetViewportState( PATH_EDIT );
}

void ViewportStateTester::SetOperatorSelect()
{
    SetViewportOperator( SELECT );
}

void ViewportStateTester::SetOperatorMove()
{
    SetViewportOperator( MOVE );
}

void ViewportStateTester::SetOperatorRotate()
{
    SetViewportOperator( ROTATE );
}

void ViewportStateTester::SetOperatorScale()
{
    SetViewportOperator( SCALE );
}

void ViewportStateTester::SetOperatorCamMove()
{
    SetViewportOperator( CAMMOVE );
}

void ViewportStateTester::SetOperatorCamRotate()
{
    SetViewportOperator( CAMROTATE );
}

void ViewportStateTester::SetOperatorCamZoom()
{
    SetViewportOperator( CAMZOOM );
}

void ViewportStateTester::SetViewportState( EViewportState eState )
{
    switch( eState )
    {
    case NONE_EDIT:
        m_pActiveState = &m_kObjectEditState;
        qDebug() << "State : Object.";
        break;
    case BONE_EDIT:
        m_pActiveState = &m_kBoneEditState;
        qDebug() << "State : Bone.";
        break;
    case PATH_EDIT:
        m_pActiveState = &m_kPathEditState;
        qDebug() << "State : Path.";
        break;
    default:
        m_pActiveState = &m_kObjectEditState;
        qDebug() << "State : Object.";
    }

}

void ViewportStateTester::SetViewportOperator( EViewportOperator eOperator )
{
    switch( eOperator )
    {
    case SELECT:
        qDebug() << "Operator : SELECT.";
        break;
    case MOVE:
        qDebug() << "Operator : MOVE.";
        break;
    case ROTATE:
        qDebug() << "Operator : ROTATE.";
        break;
    case SCALE:
        qDebug() << "Operator : SCALE.";
        break;
    case CAMMOVE:
        qDebug() << "Operator : CAMMOVE.";
        break;
    case CAMROTATE:
        qDebug() << "Operator : CAMROTATE.";
        break;
    case CAMZOOM:
        qDebug() << "Operator : CAMZOOM.";
        break;
    default:
        qDebug() << "Operator : UNKNOW.";
        break;
    }
    m_kObjectEditState.SetViewportOperator( eOperator );
    m_kBoneEditState.SetViewportOperator( eOperator );
    m_kPathEditState.SetViewportOperator( eOperator );
}

void ViewportStateTester::mousePressEvent( QMouseEvent* event )
{
    m_kMouseData.bMousePress = true;
    m_kMouseData.kMousePressPos = event->pos();
    m_kMouseData.kMouseMoveLastPos = event->pos();
    m_pActiveState->MousePress();

    QMainWindow::mousePressEvent( event );
}

void ViewportStateTester::mouseMoveEvent( QMouseEvent* event )
{
    if ( m_kMouseData.bMousePress )
    {
        m_kMouseData.kMouseMoveLastPos = event->pos();
        m_pActiveState->MouseMove();
    }
    QMainWindow::mouseMoveEvent( event );
}

void ViewportStateTester::mouseReleaseEvent( QMouseEvent* event )
{
    if ( m_kMouseData.bMousePress )
    {
        m_kMouseData.bMousePress = false;
        if ( m_kMouseData.kMousePressPos == m_kMouseData.kMouseMoveLastPos )
        {
            m_pActiveState->MouseClick();
        }
    }
    m_pActiveState->MouseRelease();

    QMainWindow::mouseMoveEvent( event );
}

void ViewportStateTester::mouseDoubleClickEvent( QMouseEvent* event )
{
    m_pActiveState->MouseDoubleClick();

    QMainWindow::mouseDoubleClickEvent( event );
}

void ViewportStateTester::wheelEvent( QWheelEvent* event )
{
    m_pActiveState->MouseWheel();

    QMainWindow::wheelEvent( event );
}
