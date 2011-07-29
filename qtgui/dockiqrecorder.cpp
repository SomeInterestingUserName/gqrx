/* -*- c++ -*- */
/*
 * Copyright 2011 Alexandru Csete OZ9AEC.
 *
 * Gqrx is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * Gqrx is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Gqrx; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */
#include <QDebug>
#include "dockiqrecorder.h"
#include "ui_dockiqrecorder.h"

DockIqRecorder::DockIqRecorder(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::DockIqRecorder)
{
    ui->setupUi(this);
}

DockIqRecorder::~DockIqRecorder()
{
    delete ui;
}


void DockIqRecorder::on_iqRecButton_clicked(bool checked)
{

    if (checked) {
        qDebug() << "Start recording";
        ui->iqPlayButton->setEnabled(false);
    }
    else {
        qDebug() << "Stop recording";
        ui->iqPlayButton->setEnabled(true);
    }
}


void DockIqRecorder::on_iqPlayButton_clicked(bool checked)
{
    if (checked) {
        qDebug() << "Start playback";
        ui->iqRecButton->setEnabled(false);
    }
    else {
        qDebug() << "Stop playback";
        ui->iqRecButton->setEnabled(true);
    }
}
