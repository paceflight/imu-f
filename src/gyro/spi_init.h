#pragma once
#include "includes.h"

//extern void spi_init(SPI_HandleTypeDef* instance, uint32_t baudRatePrescaler, uint32_t spi_mode, uint32_t irqp, uint32_t irqsp);
extern void spi_init(SPI_HandleTypeDef* spiHandle, SPI_TypeDef* instance, uint32_t baudscaler, uint32_t spi_mode, uint32_t irqp, uint32_t irqsp);