/*
 * Copyright (c) 2021 Nordic Semiconductor ASA
 * SPDX-License-Identifier: Apache-2.0
 */

/*
 *
 *	Execute a partir do diretório 'example-application' com os comandos
 *		west build -b qemu_x86 app
 *		west build -t run
 *	não esqueça de encerrar com 'crtl+a' ou 'x' 
 *
 */

#include <zephyr/kernel.h>
#include <zephyr/drivers/sensor.h>
#include <zephyr/logging/log.h>

#include <app/drivers/blink.h>

#include <app_version.h>

LOG_MODULE_REGISTER(main, CONFIG_APP_LOG_LEVEL);

#define BLINK_PERIOD_MS_STEP 100U
#define BLINK_PERIOD_MS_MAX  1000U

int main(void)
{
	/*Escreve no console a seguinte mensagem conforme a descrição da feature que
	exibe a mensagem "Hello World! This is Raptor" pensado apra executar em ambiente de virtualização
	utilizado QEMU*/
	printf("Hello World!! This is Raptor!\n");

	/*Escreve no console a seguinte mensagem conforme a descrição da feature que exibe a mensagem 
	"Programar é bacana" ressaltando o quanto é divertido e desafiador programar*/
	printf("Programar eh Bacana!\n");


	return 0;
}

