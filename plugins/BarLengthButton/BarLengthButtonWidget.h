/*
 *  Qtstalker stock charter
 *
 *  Copyright (C) 2001-2010 Stefan S. Stratigakos
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307,
 *  USA.
 */

#ifndef PLUGIN_BAR_LENGTH_BUTTON_WIDGET_HPP
#define PLUGIN_BAR_LENGTH_BUTTON_WIDGET_HPP

#include "BarLengthButtonPopupWidget.h"

class BarLengthButtonWidget : public QToolButton
{
  Q_OBJECT
  
  signals:
    void signalLength ();

  public:
    BarLengthButtonWidget (QString profile);
    ~BarLengthButtonWidget ();
    void createGUI ();
    QString length ();
    void setSettings (QStringList l, QString length);

  public slots:
    void showPopup ();
    void popupChanged ();
    
  private:
    QString _profile;
    BarLengthButtonPopupWidget *_popup;
};

#endif
